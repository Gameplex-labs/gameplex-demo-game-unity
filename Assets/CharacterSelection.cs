using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CharacterSelection : MonoBehaviour
{
	GameObject player;
	GameObject meshToReplace;
	GameObject rootToReplace;

	GameObject meshToDisable;
	GameObject rootToDisable;

	public List<GameObject> characters;
	[SerializeField] int selectedCharacter = 0;

	[SerializeField] Button equipButton;
	[SerializeField] TextMeshProUGUI equipButtonText;

	public void NextCharacter()
	{
		characters[selectedCharacter].SetActive(false);
		selectedCharacter = (selectedCharacter + 1) % characters.Count;
		characters[selectedCharacter].SetActive(true);
	}

	public void PreviousCharacter()
	{
		characters[selectedCharacter].SetActive(false);
		selectedCharacter--;
		if (selectedCharacter < 0)
		{
			selectedCharacter += characters.Count;
		}
		characters[selectedCharacter].SetActive(true);
	}

	public void Equip()
	{
		foreach (GameObject character in characters)
		{
			character.GetComponent<Character>().isEquipped = false;
		}

		characters[selectedCharacter].GetComponent<Character>().isEquipped = true;

		EquipCheck();

		player = FindObjectOfType<Protagonist>().gameObject;

		meshToReplace = player.transform.GetChild(0).gameObject;
		rootToReplace = player.GetComponentInChildren<Root>().gameObject;

		meshToReplace.SetActive(false);
		rootToReplace.SetActive(false);
		meshToReplace.transform.parent = null;
		rootToReplace.transform.parent = null;

		if (meshToDisable != null)
		{
			meshToDisable.SetActive(false);
		}
		if (rootToDisable != null)
		{
			rootToDisable.SetActive(false);
		}

		GameObject newMesh = characters[selectedCharacter].GetComponent<Character>().mesh;
		GameObject newRoot = characters[selectedCharacter].GetComponent<Character>().root;

		newMesh.transform.parent = player.transform;
		newRoot.transform.parent = player.transform;

		newMesh.transform.position = player.transform.position;
		newMesh.transform.rotation = player.transform.rotation;
		newMesh.transform.localScale = new Vector3(1, 1, 1);

		newRoot.transform.position = player.transform.position;
		newRoot.transform.rotation = player.transform.rotation;
		newRoot.transform.localScale = new Vector3(1, 1, 1);

		newMesh.SetActive(true);
		newRoot.SetActive(true);

		meshToDisable = newMesh;
		rootToDisable = newRoot;

		player.SetActive(false);
		player.SetActive(true);
	}

	public void EquipCheck()
	{
		if (characters[selectedCharacter].GetComponent<Character>().isEquipped)
		{
			equipButton.interactable = false;
			equipButtonText.text = "Equipped";
		}
		else
		{
			equipButton.interactable = true;
			equipButtonText.text = "Equip";
		}
	}
}
