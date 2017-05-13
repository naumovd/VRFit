using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using System.IO;

public class MirrorPositionHandler : MonoBehaviour
{

	public Texture mainTexture;

	public Texture aTexture;

	void OnGUI ()
	{
		if (!aTexture) {
			Debug.LogError ("Assign a Texture in the inspector.");
			return;
		}
		GUI.DrawTexture (new Rect (10, 10, 60, 60), aTexture, ScaleMode.ScaleToFit, true, 10.0F);
	}

	// Use this for initialization
	void Start ()
	{
//		mainTexture = Resources.Load ("IMG_2397.JPG");
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public Sprite LoadNewSprite (string FilePath, float PixelsPerUnit = 100.0f)
	{

		// Load a PNG or JPG image from disk to a Texture2D, assign this texture to a new sprite and return its reference

		Sprite NewSprite = new Sprite ();
		Texture2D SpriteTexture = LoadTexture (FilePath);
		NewSprite = Sprite.Create (SpriteTexture, new Rect (0, 0, SpriteTexture.width, SpriteTexture.height), new Vector2 (0, 0), PixelsPerUnit);

		return NewSprite;
	}

	public Texture2D LoadTexture (string FilePath)
	{

		// Load a PNG or JPG file from disk to a Texture2D
		// Returns null if load fails

		Texture2D Tex2D;
		byte[] FileData;

		if (File.Exists (FilePath)) {
			FileData = File.ReadAllBytes (FilePath);
			Tex2D = new Texture2D (2, 2);           // Create new "empty" texture
			if (Tex2D.LoadImage (FileData))           // Load the imagedata into the texture (size is set automatically)
				return Tex2D;                 // If data = readable -> return texture
		}  
		return null;                     // Return null if load failed
	}
}
