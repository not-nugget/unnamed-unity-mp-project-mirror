using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : Manager
{
	private void Awake()
	{
		if (!Managers.RegisterManager(this)) Destroy(this);
	}
}
