using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CharacterBuy : MonoBehaviour
{
	[SerializeField] CharacterSelection characterSelection;

	[SerializeField] GameObject[] characters;
	[SerializeField] int selectedCharacter = 0;

	[SerializeField] Button buyButton;
	[SerializeField] TextMeshProUGUI buyButtonText;
	[SerializeField] TextMeshProUGUI moneyText;

	[SerializeField] int skinPrice;
	[SerializeField] int money;

	[SerializeField] GameObject[] charactersToAdd;

	public void NextCharacter()
	{
		characters[selectedCharacter].SetActive(false);
		selectedCharacter = (selectedCharacter + 1) % characters.Length;
		characters[selectedCharacter].SetActive(true);
	}

	public void PreviousCharacter()
	{
		characters[selectedCharacter].SetActive(false);
		selectedCharacter--;
		if (selectedCharacter < 0)
		{
			selectedCharacter += characters.Length;
		}
		characters[selectedCharacter].SetActive(true);
	}

	public void Buy()
	{
		characters[selectedCharacter].GetComponent<Character>().isBought = true;

		BuyCheck();

		money -= skinPrice;
		moneyText.text = "$" + money;

		characterSelection.characters.Add(charactersToAdd[selectedCharacter]);
	}

	public void BuyCheck()
	{
		if (characters[selectedCharacter].GetComponent<Character>().isBought)
		{
			buyButton.interactable = false;
			buyButtonText.text = "Bought";
		}
		else
		{
			buyButton.interactable = true;
			buyButtonText.text = "$" + skinPrice;
		}
	}
}
