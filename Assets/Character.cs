using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
	public GameObject mesh;
	public GameObject root;

	[SerializeField] CharacterSelection characterSelection;
	[SerializeField] CharacterBuy characterBuy;

	public bool isEquipped;
	public bool isBought;
	public bool isEquipType;
	public bool isShopType;

	private void OnEnable()
	{
		if (isEquipType)
		{
			characterSelection.EquipCheck();
		}
		else if (isShopType)
		{
			characterBuy.BuyCheck();
		}
	}
}
