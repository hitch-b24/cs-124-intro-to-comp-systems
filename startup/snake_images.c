//******************************************************************************
//  snake_images.c
//
//  Author:			Paul Roper, Brigham Young University
//  Revisions:		1.0		11/25/2012		RBX430-1
//
//  Built with Code Composer Studio Version: 5.2.0.00090
//******************************************************************************
#include "msp430.h"
#include "RBX430-1.h"

#define SNAKE1_IMAGE		1
#define SNAKE_TEXT_IMAGE	1

#ifndef BYU1_IMAGE
#define BYU1_IMAGE			0
#endif

#ifndef SNAKE1_IMAGE
#define SNAKE1_IMAGE		0
#endif

#ifndef SNAKE1_TEXT_IMAGE
#define SNAKE1_TEXT_IMAGE	0
#endif

#ifndef KING_SNAKE_IMAGE
#define KING_SNAKE_IMAGE	0
#endif

//-- BYU Logo ------------------------------------------------------------------
#if BYU1_IMAGE
const uint16 byu1_image[] = { 60, 39,
  0x07ff,0x7000,0x840e,0x02f0,0x8410,0x7390,0x000e,0x07ff,0x06ff,0x838e,0xb492,
  0x04f0,0xb596,0x8496,0x0390,0x06ff,0x05ff,0x940e,0x08f0,0xb596,0x0410,0x05ff,
  0x04ff,0x9380,0x06f0,0xb596,0x8410,0xb492,0x02f0,0xb596,0x0390,0x04ff,0x03ff,
  0x7000,0xb592,0xb596,0x7412,0xb40e,0x03f0,0xb596,0x01ff,0x7000,0x940e,0xb596,
  0x9596,0x000e,0x03ff,0x03ff,0xb48e,0xb596,0x7416,0x01ff,0xb380,0x02f0,0xb596,
  0x9596,0x03ff,0x940e,0xb596,0x7416,0x03ff,0x02ff,0x8000,0xb596,0x7496,0x02ff,
  0xb380,0x02f0,0xb596,0x9596,0x04ff,0xb48e,0xb596,0x0010,0x02ff,0x02ff,0xb48e,
  0x9596,0x000e,0x02ff,0xb380,0x02f0,0xb596,0x8596,0x04ff,0x7000,0xb592,0x0416,
  0x02ff,0x01ff,0x7000,0xb596,0x0416,0x03ff,0xb380,0x03f0,0xb596,0x8410,0x000e,
  0x03ff,0xb400,0x9596,0x000e,0x01ff,0x01ff,0xb380,0x9596,0x000e,0x02ff,0x9380,
  0x04f0,0xb596,0x9596,0x04ff,0x7000,0xb592,0x0392,0x01ff,0x01ff,0xb58e,0x7596,
  0x03ff,0xb380,0x04f0,0xb596,0x0496,0x05ff,0xb58e,0x0496,0x01ff,0x01ff,0xb592,
  0x9596,0x01ff,0x7380,0x01ff,0x7000,0x04f0,0xb596,0x0396,0x05ff,0xb592,0x8596,
  0x01ff,0x8000,0x02f0,0xb596,0x0010,0x958e,0x02ff,0xb590,0x03f0,0xb596,0x000e,
  0x03ff,0x7490,0x8000,0x02f0,0xb596,0x000e,0xb380,0x02f0,0xb596,0x8396,0xb596,
  0x0010,0x01ff,0xb400,0x02f0,0xb596,0x7596,0x03ff,0x8000,0xb596,0xb38e,0x02f0,
  0xb596,0x0012,0xb400,0x04f0,0xb596,0x0416,0x01ff,0x9000,0x02f0,0xb596,0x0416,
  0x03ff,0xb380,0x04f0,0xb596,0x0396,0xb580,0x04f0,0xb596,0x7596,0x01ff,0x7000,
  0x02f0,0xb596,0x0010,0x03ff,0xb58e,0x04f0,0xb596,0x0416,0xb58e,0x05f0,0xb596,
  0x000e,0x01ff,0xb58e,0x9596,0x03ff,0x7000,0x05f0,0xb596,0x7596,0xb590,0x05f0,
  0xb596,0x0016,0x01ff,0xb380,0x0496,0x03ff,0xb380,0x05f0,0xb596,0x7596,0xb590,
  0x05f0,0xb596,0x0496,0x01ff,0x8000,0x0396,0x03ff,0xb480,0x05f0,0xb596,0x8596,
  0xb590,0x05f0,0xb596,0x8596,0x02ff,0x000e,0x03ff,0xb592,0x05f0,0xb596,0x8596,
  0xb590,0x06f0,0xb596,0x000e,0x04ff,0x8000,0x06f0,0xb596,0x8596,0xb590,0x06f0,
  0xb596,0x0396,0x04ff,0xb400,0x06f0,0xb596,0x7596,0xb58e,0x06f0,0xb596,0x7596,
  0x04ff,0xb590,0x06f0,0xb596,0x7596,0xb58e,0x06f0,0xb596,0x9596,0x03ff,0x7000,
  0x07f0,0xb596,0x0496,0xb400,0x07f0,0xb596,0x0010,0x02ff,0xb380,0x07f0,0xb596,
  0x0396,0xb380,0x07f0,0xb596,0x0016,0x02ff,0xb400,0x07f0,0xb596,0x0396,0x8000,
  0x07f0,0xb596,0x0016,0x02ff,0xb400,0x07f0,0xb596,0x0010,0x7000,0x07f0,0xb596,
  0x0016,0x02ff,0xb400,0x06f0,0xb596,0x9596,0x01ff,0x01ff,0xb58e,0x06f0,0xb596,
  0x0016,0x02ff,0xb400,0x06f0,0xb596,0x7596,0x01ff,0x01ff,0xb400,0x06f0,0xb596,
  0x0016,0x02ff,0xb400,0x06f0,0xb596,0x0396,0x01ff,0x01ff,0x8000,0x04f0,0xb596,
  0x9596,0x738e,0x0010,0x02ff,0x8380,0x838e,0x05f0,0xb596,0x000e,0x01ff,0x02ff,
  0xb58e,0x03f0,0xb596,0x8596,0x05ff,0x7000,0x04f0,0xb596,0x7496,0x02ff,0x02ff,
  0x9380,0x03f0,0xb596,0x7596,0x05ff,0x7000,0x04f0,0xb596,0x0390,0x02ff,0x03ff,
  0xb590,0x02f0,0xb596,0x0496,0x06ff,0xb592,0x02f0,0xb596,0x7596,0x03ff,0x03ff,
  0x8380,0x02f0,0xb596,0x7496,0x000e,0x04ff,0x7000,0xb592,0x02f0,0xb596,0x0010,
  0x03ff,0x04ff,0xb40e,0x02f0,0xb596,0x8496,0x7410,0x02f0,0x738e,0x840e,0xb592,
  0x02f0,0xb596,0x7412,0x04ff,0x05ff,0xb48e,0x08f0,0xb596,0x7416,0x05ff,0x05ff,
  0x7000,0x940e,0x05f0,0xb596,0x9596,0x7412,0x06ff,0x07ff,0x7380,0x8410,0x02f0,
  0x9492,0x8410,0x038e,0x07ff
};
#endif


//-- SNAKE1 IMAGE --------------------------------------------------------------
#if SNAKE1_IMAGE
const uint16 snake1_image[] = { 63, 79,
  0x09ff,0x7380,0xc610,0x8618,0x038e,0x08ff,0x09ff,0xc7d0,0x02f0,0xc618,0x861a,
  0x08ff,0x08ff,0x8000,0xc41a,0x02f0,0xc618,0xd618,0x841a,0x0390,0x06ff,0x08ff,
  0xd400,0xc610,0xd618,0x03f0,0xc618,0x8698,0x06ff,0x08ff,0x868e,0x05f0,0xc618,
  0xc418,0x000e,0x05ff,0x08ff,0xc61a,0x06f0,0xc618,0x000e,0x05ff,0x07ff,0xfb80,
  0x02f0,0xc618,0xc69a,0x7390,0x740e,0xd618,0xc418,0x000e,0x05ff,0x07ff,0xd600,
  0xc618,0xd618,0x039a,0x02ff,0x7000,0x8690,0x06ff,0x07ff,0xc7c0,0xc618,0xc698,
  0x01ff,0x8000,0x000e,0x0010,0x8400,0x06ff,0x07ff,0xc610,0xc618,0x7698,0x01ff,
  0xd000,0x0010,0x041f,0x7000,0x06ff,0x07ff,0xc418,0xc618,0x061a,0x04ff,0x7000,
  0x000e,0x05ff,0x06ff,0x7000,0x02f0,0xc618,0x0418,0x04f0,0x738e,0x800e,0x0010,
  0x05ff,0x06ff,0x7000,0xc618,0xd698,0xc61a,0x06f0,0xc618,0x000e,0x04ff,0x06ff,
  0x8000,0xd618,0xd69f,0x07f0,0xc618,0x769a,0x04ff,0x06ff,0x8000,0xd618,0xc61a,
  0x07f0,0xc618,0xfe18,0x000e,0x03ff,0x06ff,0xc000,0xd618,0xc41a,0x08f0,0xc618,
  0x039f,0x03ff,0x06ff,0xd380,0xd618,0xc61f,0x08f0,0xc618,0x7618,0x03ff,0x06ff,
  0xd380,0xc618,0xc61f,0x08f0,0xc618,0x8618,0x03ff,0x06ff,0xd380,0xc618,0xc69a,
  0x08f0,0xc618,0x8618,0x03ff,0x06ff,0xd380,0xc618,0xc7da,0x09f0,0xc618,0x03ff,
  0x06ff,0xc000,0xc618,0xd698,0x09f0,0xc618,0x000e,0x02ff,0x06ff,0x8000,0xc618,
  0xd618,0xc61a,0x08f0,0xc618,0x000e,0x02ff,0x06ff,0x7000,0xc61a,0xc618,0xc7df,
  0x08f0,0xc618,0x03ff,0x06ff,0x7000,0xc61a,0xc618,0xfe98,0xc61a,0x06f0,0xc618,
  0x7698,0x03ff,0x07ff,0x02f0,0xc618,0xd618,0xc69f,0x06f0,0xc618,0x0618,0x03ff,
  0x07ff,0xc610,0x02f0,0xc618,0xffd8,0xc61a,0x04f0,0xc618,0xd618,0x0398,0x03ff,
  0x07ff,0xc68e,0xc61a,0x02f0,0xc618,0xffda,0xc61a,0x03f0,0xc618,0x87d8,0x04ff,
  0x07ff,0xc680,0x03f0,0xc618,0xd618,0xfe9a,0x02f0,0xd69a,0xfe9a,0x061a,0x04ff,
  0x07ff,0xd400,0x03f0,0xc618,0xc69a,0x03f0,0xc618,0xc418,0x0010,0x04ff,0x07ff,
  0xfb80,0x03f0,0xc618,0xd618,0xd69a,0xc69a,0xc418,0x8418,0x0410,0x04ff,0x07ff,
  0xd000,0xc61a,0x04f0,0xc618,0x7398,0x038e,0x740e,0x7610,0x04ff,0x07ff,0x7000,
  0xc41f,0x04f0,0xc618,0x0398,0x01ff,0x8400,0x840e,0x04ff,0x08ff,0xc61a,0x04f0,
  0xc618,0x0398,0x01ff,0x8400,0x840e,0x04ff,0x740e,0x07ff,0xc7d0,0x04f0,0xc618,
  0x0398,0x01ff,0x7400,0x8410,0x04ff,0xfc1f,0x000e,0x06ff,0xc7ce,0x04f0,0xc618,
  0x0418,0x01ff,0x740e,0x8410,0x04ff,0x8390,0xfc10,0x0010,0x05ff,0xd400,0x04f0,
  0xc618,0x0410,0x01ff,0x840e,0x8410,0x04ff,0x7410,0x87df,0x039f,0x05ff,0xfb80,
  0x04f0,0xc618,0x0418,0x01ff,0x7410,0x8410,0x04ff,0x840e,0x841f,0x87df,0x000e,
  0x04ff,0x8000,0xc61f,0x03f0,0xc618,0x0618,0x01ff,0x8410,0xc418,0x000e,0x03ff,
  0x01ff,0xe7ce,0xfb9f,0x0390,0x05ff,0xc61f,0x03f0,0xc618,0x7618,0x01ff,0x840e,
  0x7618,0x0010,0x03ff,0x01ff,0x7380,0xfc1f,0x87df,0x05ff,0xc7d0,0x03f0,0xc618,
  0x7618,0x01ff,0x840e,0x8610,0x7410,0x03ff,0x02ff,0x840e,0x8410,0x05ff,0xc7ce,
  0x03f0,0xc618,0x7698,0x01ff,0x8400,0x8610,0x8410,0x000e,0x02ff,0x02ff,0x7000,
  0x01fe,0x0010,0x04ff,0xfc00,0xc610,0x02f0,0xc618,0x8698,0x01ff,0xc380,0x8610,
  0x8390,0x8710,0x02ff,0x03ff,0x800e,0x039f,0x04ff,0xfb80,0x03f0,0xc618,0x8698,
  0x01ff,0xc000,0xe410,0x7410,0xe410,0x039c,0x01ff,0x03ff,0x7000,0x07df,0x04ff,
  0xc000,0xc61a,0x02f0,0xc618,0x8698,0x01ff,0x7000,0xe410,0x761c,0x740e,0x0710,
  0x01ff,0x04ff,0xc7d0,0x04ff,0x7000,0xc61f,0x02f0,0xc618,0xd618,0x02ff,0x8410,
  0xe410,0x7390,0x860e,0x01ff,0x04ff,0xffce,0x0010,0x03ff,0x7000,0xc61a,0x02f0,
  0xc618,0xd618,0x02ff,0x860e,0x7010,0x8610,0xc40e,0x000e,0x04ff,0xfc00,0x039f,
  0x04ff,0x8690,0x02f0,0xc618,0xd618,0x000e,0x01ff,0x8400,0x0390,0xe400,0x8390,
  0x0010,0x04ff,0xfb80,0x761f,0x04ff,0xc680,0x02f0,0xc618,0xd618,0x000e,0x01ff,
  0xc380,0x0390,0x7000,0x7418,0x039c,0x04ff,0x8000,0x87df,0x04ff,0xc400,0x02f0,
  0xc618,0xd618,0x0010,0x01ff,0x7000,0x039c,0x01ff,0x8400,0x0410,0x04ff,0x7000,
  0x841f,0x04ff,0xc380,0x02f0,0xc618,0xd618,0x0010,0x02ff,0x0410,0x01ff,0x8000,
  0x041f,0x05ff,0xc41f,0x000e,0x03ff,0xc000,0x03f0,0xc618,0x001a,0x02ff,0x77ce,
  0x02ff,0x07d0,0x05ff,0xc690,0x0010,0x03ff,0x8000,0x03f0,0xc618,0x001a,0x02ff,
  0x7380,0x02ff,0x7400,0x05ff,0x87d0,0x739a,0x000e,0x02ff,0x7000,0x02f0,0xc618,
  0x8618,0x001f,0x06ff,0x05ff,0x87ce,0xffd8,0x01fe,0x861f,0x02ff,0xc610,0x02f0,
  0xc618,0x039f,0x06ff,0x04ff,0xd380,0xc7df,0x869a,0xc418,0xd698,0x769f,0x01ff,
  0xc610,0x02f0,0xc618,0x041a,0x06ff,0x03ff,0x7000,0xd7da,0x02f0,0xc7d8,0xc618,
  0x8618,0xfe90,0x039a,0xc68e,0x02f0,0xc618,0x041a,0x06ff,0x03ff,0xfc00,0xc61a,
  0xd690,0xc7d8,0x02f0,0xc618,0x8418,0xc7da,0xc60e,0x02f0,0xc618,0x061a,0x06ff,
  0x03ff,0xc7da,0xc618,0xd698,0xc698,0x03f0,0xc618,0xfe18,0xc69f,0x02f0,0xc618,
  0x0698,0x06ff,0x02ff,0xd000,0xc61f,0xc618,0x02f0,0xd698,0x04f0,0xc618,0xc7d8,
  0x02f0,0xc618,0x7698,0x06ff,0x02ff,0xd7c0,0x02f0,0xc618,0xd698,0xd690,0x04f0,
  0xc618,0xd698,0x02f0,0xc618,0x8618,0x06ff,0x02ff,0xc7d0,0x02f0,0xc618,0xd698,
  0xd618,0x04f0,0xc618,0xd618,0xc698,0xc618,0x8618,0x06ff,0x02ff,0xc69a,0x02f0,
  0xc618,0xd7df,0xd610,0x04f0,0xc618,0xd698,0x03f0,0xc618,0x000e,0x05ff,0x01ff,
  0x7000,0xc61f,0x02f0,0xc618,0xd7da,0xd618,0x03f0,0xc618,0xd618,0xc69a,0x02f0,
  0xc618,0xd618,0x000e,0x05ff,0x01ff,0x7000,0xc61f,0x02f0,0xc618,0xd618,0xc69f,
  0x03f0,0xc618,0xd698,0xc61a,0x02f0,0xc618,0xd618,0x0010,0x05ff,0x01ff,0x7000,
  0xc61f,0x03f0,0xc618,0xffda,0xc69a,0xc618,0xd698,0xc69f,0x04f0,0xc618,0x001a,
  0x05ff,0x01ff,0x7000,0xc61f,0x03f0,0xc618,0xd618,0xfe9a,0x01fe,0xd69f,0x05f0,
  0xc618,0x001a,0x05ff,0x02ff,0xc61f,0x04f0,0xc618,0xc610,0x07f0,0xc618,0x039f,
  0x05ff,0x02ff,0xc690,0x0cf0,0xc618,0x039f,0x05ff,0x02ff,0xc7c0,0x0cf0,0xc618,
  0x039f,0x05ff,0x02ff,0xfc00,0x0cf0,0xc618,0x039a,0x05ff,0x02ff,0x8000,0xc61f,
  0x0af0,0xc618,0xd618,0x0010,0x05ff,0x03ff,0xc7d8,0x0af0,0xc618,0xfe18,0x06ff,
  0x03ff,0xfc00,0x0af0,0xc618,0x77da,0x06ff,0x03ff,0x7000,0xc69f,0x08f0,0xc618,
  0xfe18,0x039a,0x06ff,0x04ff,0xfc00,0xc61a,0x07f0,0xc618,0x87df,0x07ff,0x04ff,
  0x7000,0xfe90,0x06f0,0xc618,0xd69a,0x038e,0x07ff,0x05ff,0x8380,0xffda,0xc61a,
  0x03f0,0xc618,0xfe98,0x0398,0x08ff,0x06ff,0x7000,0xfc10,0x02fe,0xc69f,0x0390,
  0x09ff,0x08ff,0x7380,0x738e,0x000e,0x0aff
};
#endif

//-- SNAKE TEXT ----------------------------------------------------------------
#if SNAKE_TEXT_IMAGE
const uint16 snake_text_image[] = { 111, 39,
  0x07ff,0xf800,0x87df,0x13ff,0xffce,0x02fe,0x000e,0x05ff,0x07ff,0xfe80,0x01fe,
  0x0010,0x11ff,0xfb80,0x03fe,0x87df,0x05ff,0x07ff,0xffc0,0x01fe,0x039f,0x11ff,
  0xffce,0x04fe,0x039f,0x04ff,0x07ff,0xfc00,0x01fe,0x041f,0x11ff,0x05fe,0x77df,
  0x04ff,0x07ff,0xf800,0x01fe,0x07df,0x10ff,0x8000,0x06fe,0x000e,0x03ff,0x07ff,
  0x8000,0x01fe,0x77df,0x10ff,0x8000,0x02fe,0x000e,0xfe8e,0x02fe,0x001f,0x03ff,
  0x07ff,0x7000,0x01fe,0x87df,0x10ff,0xf800,0x01fe,0x07df,0x02ff,0xffda,0x01fe,
  0x039f,0x03ff,0x08ff,0x02fe,0x000e,0x0fff,0xf800,0x01fe,0x07df,0x02ff,0xfc00,
  0x01fe,0x041f,0x03ff,0x08ff,0xffd0,0x01fe,0x0010,0x0fff,0x8000,0x02fe,0x000e,
  0x01ff,0xfb80,0x01fe,0x07df,0x03ff,0x08ff,0xffc0,0x01fe,0x001f,0x0fff,0x7000,
  0x08fe,0x77df,0x01ff,0x08ff,0xfc00,0x01fe,0x039f,0x10ff,0xffda,0x08fe,0x0010,
  0x08ff,0xfb80,0x01fe,0x069f,0x10ff,0xffc0,0x08fe,0x001f,0x08ff,0xf800,0x01fe,
  0x77df,0x10ff,0x8000,0x08fe,0x0010,0x01ff,0xfc00,0x01fe,0x77df,0x02ff,0xfb80,
  0x87df,0x7000,0x01fe,0x87df,0x02ff,0x7000,0x01fe,0xd390,0x01fe,0x77df,0x03ff,
  0x8000,0x01fe,0x87df,0xfe80,0x07df,0x02ff,0xfc00,0x07fe,0x000e,0x7000,0x03fe,
  0x039f,0x01ff,0xfe80,0x01fe,0x701f,0x02fe,0x02ff,0xd000,0x04fe,0x039f,0x02ff,
  0xffce,0x04fe,0x04ff,0xf800,0x02fe,0x0010,0x03ff,0xfb80,0x03fe,0x87df,0x01ff,
  0xfc00,0x01fe,0x77df,0xffd0,0x01fe,0x0010,0x01ff,0x8000,0x04fe,0x87df,0x02ff,
  0xffd0,0x04fe,0x000e,0x03ff,0xffc0,0x02fe,0x04ff,0xfc00,0x04fe,0x0010,0xfb80,
  0x04fe,0x001a,0x01ff,0x8000,0x05fe,0x000e,0x01ff,0x05fe,0x0010,0x03ff,0xffd0,
  0x01fe,0x87df,0x01fe,0x041f,0x02ff,0xffc0,0x04fe,0x039f,0x7000,0x04fe,0x039f,
  0x02ff,0x02fe,0x039f,0xffd0,0x01fe,0x039f,0x01ff,0xffda,0x04fe,0x039f,0x02ff,
  0x8000,0x02fe,0x841f,0x02fe,0x000e,0x01ff,0xffc0,0x01fe,0x001f,0xffce,0x01fe,
  0x07df,0x01ff,0xffce,0x03fe,0x041f,0x02ff,0xffd0,0x01fe,0x001f,0xfb80,0x01fe,
  0x041f,0x01ff,0xffd0,0x01fe,0x039f,0xffda,0x01fe,0x041f,0x02ff,0xfb80,0x02fe,
  0xf81f,0x02fe,0x041f,0x01ff,0xfc00,0x04fe,0x77df,0x01ff,0xd000,0x03fe,0x07df,
  0x02ff,0xffce,0x01fe,0x039f,0x8000,0x01fe,0x77df,0x01ff,0xffc0,0x01fe,0x001f,
  0xfc00,0x01fe,0x07df,0x02ff,0xfc00,0x02fe,0x8000,0x02fe,0x87df,0x01ff,0xfb80,
  0x04fe,0x87df,0x01ff,0x7000,0x03fe,0x87df,0x02ff,0xffc0,0x01fe,0x041f,0x7000,
  0x01fe,0x87df,0x01ff,0xfc00,0x01fe,0x039f,0xfb80,0x01fe,0x77df,0x02ff,0xffce,
  0x01fe,0x77df,0x01ff,0xffd0,0x02fe,0x000e,0x8000,0x05fe,0x01ff,0xf800,0x04fe,
  0x02ff,0xfc00,0x01fe,0x07df,0x01ff,0x01fe,0x87df,0x01ff,0xf800,0x01fe,0x07df,
  0x8000,0x01fe,0x87df,0x02ff,0xffda,0x01fe,0x041f,0x01ff,0xfb80,0x02fe,0x039f,
  0x01ff,0xfc00,0x04fe,0x01ff,0xfc00,0x01fe,0x07df,0xffd0,0x01fe,0x000e,0x01ff,
  0xfb80,0x01fe,0x77df,0x01ff,0x02fe,0x01ff,0x8000,0x01fe,0x77df,0x7000,0x02fe,
  0x000e,0x7000,0x02fe,0x001f,0x02ff,0xffd0,0x01fe,0x041f,0x03ff,0x7000,0x02fe,
  0x01ff,0xffce,0x01fe,0x039f,0xffce,0x01fe,0x0010,0x01ff,0x8000,0x02fe,0x700e,
  0x02fe,0x02ff,0x01fe,0x87df,0x01ff,0xffd0,0x01fe,0x0010,0x8000,0x02fe,0x0010,
  0x02ff,0xfc00,0x01fe,0x07df,0xffce,0x04fe,0x87df,0x01ff,0x02fe,0x0010,0xffc0,
  0x01fe,0x001f,0xffce,0x05fe,0x87df,0xfb80,0x03fe,0x000e,0xffce,0x01fe,0x001f,
  0x8000,0x02fe,0x03ff,0xf800,0x01fe,0x87df,0xffd0,0x04fe,0x77df,0x8000,0x02fe,
  0x01ff,0xfc00,0x01fe,0x041f,0xffda,0x05fe,0x87df,0xfe80,0x03fe,0x0010,0xfe80,
  0x01fe,0x041f,0xf800,0x02fe,0x03ff,0x7000,0x01fe,0x87df,0x05fe,0x07df,0xf800,
  0x01fe,0x77df,0x01ff,0xf800,0x01fe,0x069f,0x06fe,0x07df,0xffc0,0x03fe,0x001f,
  0xfb80,0x01fe,0x069f,0xf800,0x02fe,0x03ff,0x7000,0x02fe,0xffce,0x04fe,0x001f,
  0x8000,0x01fe,0x041f,0x01ff,0x8000,0x01fe,0x041f,0xffce,0x05fe,0x039f,0xfc00,
  0x03fe,0x0010,0xd000,0x01fe,0x041f,0xf800,0x02fe,0x04ff,0x02fe,0xfb80,0x03fe,
  0x77df,0x02ff,0xffd0,0x0010,0x02ff,0xffd0,0x039f,0xfb80,0x02fe,0xfb8e,0x01fe,
  0xd7df,0x01ff,0x8000,0x02fe,0x87df,0x02ff,0xffd0,0x039f,0x8000,0x02fe,0x000e,
  0x03ff,0x02fe,0x1cff,0x8000,0x02fe,0x0010,0x03ff,0x01fe,0xd7df,0x1cff,0x7000,
  0x02fe,0x001f,0x02ff,0x8000,0x01fe,0x87df,0x1dff,0x02fe,0x041f,0x02ff,0xf800,
  0x01fe,0x77df,0x1dff,0xffce,0x01fe,0xd7df,0x02ff,0xfc00,0x01fe,0x07df,0x1dff,
  0xfc00,0x02fe,0x741f,0x8000,0x02fe,0x041f,0x1dff,0xf800,0x06fe,0x001f,0x1eff,
  0x06fe,0x000e,0x1eff,0xffce,0x04fe,0x77df,0x01ff,0x1eff,0x7000,0x04fe,0x0010,
  0x01ff,0x1fff,0x8380,0x02fe,0x041f,0x02ff
};
#endif

#if KING_SNAKE_IMAGE

const uint16 king_snake_image[] = { 93, 120,
  0x0fff,0xc610,0x0010,0x0eff,
  0x0eff,0xc000,0x0398,0x0418,0x0eff,
  0x0eff,0xc000,0x7218,0x0618,0x02ff,0x7000,0x000e,0x0aff,
  0x0eff,0xc000,0x4210,0x0418,0x02ff,0xc600,0x0618,0x0aff,
  0x0fff,0x9610,0x001f,0x02ff,0x47c0,0x860e,0x0aff,
  0x0fff,0xd380,0x0398,0x02ff,0xc600,0xc618,0x0aff,
  0x0fff,0xc380,0x7608,0x02ff,0xc000,0x7712,0x0aff,
  0x0fff,0xc380,0xc610,0x0018,0x02ff,0x069f,0x0aff,
  0x0fff,0xc400,0x7208,0x0618,0x02ff,0x77d8,0x0aff,
  0x0fff,0xc400,0x4210,0xc38e,0x02ff,0xc398,0x0aff,
  0x0bff,0xc380,0x039f,0x02ff,0x4600,0x7208,0x8398,0x0010,0x01ff,0x8398,0x000e,0x09ff,
  0x0bff,0xc7c0,0x07d0,0x02ff,0x4600,0x4398,0x738e,0x0410,0x7000,0x7398,0x0018,0x09ff,
  0x0bff,0x02f0,0x760e,0x02ff,0x47c0,0x7218,0x7388,0x740e,0x7000,0x7018,0x0390,0x09ff,
  0x0bff,0xc600,0x77c8,0x02ff,0xc60e,0x460e,0x7398,0xc00e,0x700e,0x4018,0x060e,0x09ff,
  0x0bff,0x8000,0xc71f,0x02ff,0x460e,0x7218,0x738e,0x700e,0x8018,0x7010,0x7600,0x09ff,
  0x0cff,0xc60e,0x0018,0x01ff,0x4610,0x4398,0x738e,0x000e,0xc410,0x000e,0x838e,0x09ff,
  0x0cff,0xc600,0x8618,0x01ff,0xc610,0x7608,0x738e,0x0380,0xffc0,0x000e,0x838e,0x09ff,
  0x0cff,0x4600,0xfa08,0x0018,0x4618,0x4210,0x738e,0x000e,0x7380,0x4000,0x8380,0x000e,0x08ff,
  0x0cff,0xc600,0x4608,0x0618,0xc418,0x7208,0x720e,0x0008,0x02ff,0x700e,0x0398,0x08ff,
  0x0cff,0xc600,0x4208,0xd418,0x421f,0xc20e,0x7388,0x0380,0x7380,0xc60e,0xd618,0xc7da,0x08ff,
  0x0cff,0xc400,0x4218,0xc208,0x4418,0x7208,0x738e,0xc38e,0x02f0,0xc618,0x7610,0x838e,0x0018,0x07ff,
  0x0cff,0xc380,0x03f0,0x4208,0x4408,0xc398,0xc618,0x4218,0x8208,0x7208,0x038e,0x0010,0x07ff,
  0x0cff,0xc000,0xc208,0x02f0,0x4208,0xc208,0xc610,0x02f0,0xc218,0x4608,0x7218,0x038e,0x0390,0x07ff,
  0x0cff,0x8000,0x4218,0x4208,0x8608,0xc418,0xc208,0x4608,0x4208,0x7608,0xc218,0x720e,0x0400,0x07ff,
  0x0cff,0x7000,0x4618,0x4218,0xc498,0x03f0,0x4218,0x4608,0xc208,0x7388,0x038e,0x7600,0x07ff,
  0x0dff,0x4218,0x8218,0xc61f,0x4208,0xc218,0x02f0,0x4208,0x4608,0xc610,0x8618,0x8400,0x07ff,
  0x0dff,0xc410,0xc608,0x02f0,0x4208,0x4608,0x4218,0x4208,0xfc18,0x8618,0xc410,0x740e,0x07ff,
  0x0dff,0xc60e,0x4618,0xc208,0x4608,0x02f0,0x4208,0xb618,0x861f,0x840e,0x8410,0x061a,0x07ff,
  0x0dff,0xe680,0xc210,0x4608,0xc218,0x4208,0x8618,0xc41f,0x740e,0x7410,0x8410,0x8690,0x07ff,
  0x0dff,0x47ce,0x4218,0xc218,0x4608,0xc618,0xc610,0x840e,0x02f0,0x8410,0x7410,0xfc10,0x0018,0x06ff,
  0x0dff,0xc61a,0xc208,0x4608,0xc218,0xc498,0x740e,0x8410,0xc40e,0x740e,0xc390,0x8410,0x061a,0x06ff,
  0x0cff,0x7000,0x461f,0x4608,0xc218,0x8618,0x7418,0x8390,0x840e,0xd7d0,0xc61f,0xfe8e,0x871a,0xfe10,0x06ff,
  0x0dff,0x4618,0xc218,0x8618,0x8398,0x840e,0x8410,0x8390,0xc41a,0xfc18,0x8698,0xfe18,0xc398,0x001f,0x05ff,
  0x0dff,0x458e,0xfe18,0x8610,0x740e,0x7410,0x02f0,0x8410,0xb7d8,0xd7d8,0xffd2,0x97d2,0x8418,0x0618,0x05ff,
  0x0dff,0xc400,0xc7c8,0x840e,0x8398,0x840e,0x02f0,0x8390,0x701f,0xc00e,0x701f,0xd00e,0x8398,0x860e,0x05ff,
  0x0dff,0xc000,0xc698,0x740e,0x861f,0x7410,0x8390,0x740e,0x0018,0xc000,0x0018,0xc000,0x740e,0xfc10,0x05ff,
  0x0eff,0xc718,0xc410,0x02f0,0x7410,0x8410,0x7410,0xc610,0x8610,0xc610,0x8410,0x8390,0xc40e,0x000e,0x04ff,
  0x0eff,0x87ce,0xc410,0x8390,0x740e,0x8390,0x740e,0x8390,0x838e,0x840e,0x8410,0x8390,0x840e,0x0018,0x04ff,
  0x0eff,0xc600,0x8610,0x740e,0x8390,0x740e,0x8390,0x840e,0x7410,0x8390,0x740e,0x8390,0x840e,0x001f,0x04ff,
  0x0eff,0xc400,0xc610,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x7410,0x8410,0x0018,0x04ff,
  0x0eff,0xc380,0xc410,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x8410,0xc410,0x05ff,
  0x0eff,0xc000,0xc390,0x8398,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x840e,0x8390,0x0610,0x05ff,
  0x0eff,0x8000,0x7410,0x8618,0x8410,0x840e,0x8410,0x840e,0x04f0,0x8410,0x0398,0x05ff,
  0x0eff,0x7000,0x7418,0xc610,0x04f0,0x8410,0x8390,0x8410,0x7410,0x8410,0x0018,0x05ff,
  0x0fff,0x8398,0xc40e,0x8398,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0xc40e,0x000e,0x05ff,
  0x0fff,0x02f0,0x7410,0xc618,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0xc390,0x06ff,
  0x0fff,0x7618,0x8390,0xc390,0x7618,0x8390,0x740e,0x8390,0x02f0,0x740e,0x7610,0x06ff,
  0x0fff,0x860e,0x02f0,0x8410,0xc610,0x8618,0x8390,0x03f0,0x8410,0x0418,0x06ff,
  0x0fff,0x8600,0x8390,0x740e,0x8390,0xc61a,0x8418,0x02f0,0x7410,0xc390,0x0018,0x06ff,
  0x0fff,0xc380,0x740e,0x8390,0x840e,0x7610,0xc600,0x8618,0x840e,0xc610,0x07ff,
  0x0fff,0xc000,0x8410,0x02f0,0x8390,0xc390,0x000e,0xc60e,0xc618,0xc698,0x07ff,
  0x0fff,0xc000,0x7410,0x8390,0x740e,0x8410,0x0618,0x02ff,0xf800,0x001f,0x06ff,
  0x10ff,0x8418,0x8410,0x840e,0x8390,0xc40e,0x000e,0x02ff,0x07df,0x06ff,
  0x10ff,0x8600,0x740e,0x8390,0x740e,0x8410,0x7618,0x02ff,0xffc0,0x06ff,
  0x10ff,0x7600,0x8390,0x740e,0x8390,0x740e,0xc610,0x0010,0x01ff,0xf800,0x77df,0x000e,0x04ff,
  0x10ff,0xc000,0x8410,0x8390,0x02f0,0x8410,0x838e,0x7698,0x02ff,0xffc0,0x77df,0x04ff,
  0x11ff,0x8418,0x8410,0x02f0,0x840e,0x7410,0xc610,0x0010,0x01ff,0xfb80,0x05ff,
  0x11ff,0x8610,0x840e,0x02f0,0x8410,0x840e,0x8390,0x0618,0x01ff,0xf800,0x05ff,
  0x11ff,0xc600,0x8410,0x7410,0x03f0,0x8410,0xc60e,0x000e,0xf800,0x000e,0x04ff,
  0x11ff,0xd000,0x7418,0x8390,0x740e,0x8390,0x740e,0x8410,0x061f,0x01ff,0x000e,0x04ff,
  0x12ff,0x841f,0x8410,0x02f0,0x8390,0x8410,0x840e,0xc410,0x06ff,
  0x11ff,0x8000,0x871a,0x8390,0x740e,0x8390,0x740e,0xc390,0xc618,0x0018,0x05ff,
  0x11ff,0xe400,0xff1c,0x7618,0x8390,0x740e,0x8390,0x02f0,0x8618,0x0418,0x05ff,
  0x11ff,0xe600,0xc71c,0xc610,0x03f0,0xc618,0xc690,0x841f,0xc410,0x000e,0x04ff,
  0x11ff,0xe600,0xe71c,0xb71f,0xc418,0x8610,0xc418,0x8618,0x8398,0x740e,0x0398,0x04ff,
  0x11ff,0xe400,0x02f0,0xe71c,0x761a,0x8390,0x740e,0xc610,0x7418,0x8390,0x0610,0x04ff,
  0x11ff,0xc700,0x02f0,0xe71c,0xc71c,0x740e,0x8390,0x840e,0x8618,0x8410,0xc410,0x04ff,
  0x11ff,0xe70e,0x03f0,0xe71c,0x741a,0x8390,0xc60e,0x7618,0x8390,0x740e,0x0018,0x03ff,
  0x11ff,0xe70e,0xe61c,0x02f0,0xe71c,0x849c,0x840e,0xc410,0x7610,0x02f0,0x8410,0x0610,0x03ff,
  0x11ff,0xe70e,0x03f0,0xe71c,0xff1c,0x7418,0xc390,0x8618,0x8410,0x7410,0xc410,0x03ff,
  0x11ff,0xe710,0x04f0,0xe71c,0x7612,0xc610,0x8610,0x7410,0x8410,0x8390,0x0018,0x02ff,
  0x11ff,0xe70e,0x04f0,0xe71c,0xc7dc,0xd40e,0x8398,0x740e,0x8390,0x840e,0x0398,0x02ff,
  0x11ff,0xe70e,0x03f0,0xe71c,0xe71a,0xd71a,0x8410,0x7410,0x8410,0x840e,0x740e,0x0610,0x02ff,
  0x11ff,0xe70e,0x05f0,0xe71c,0x7398,0x04f0,0x8410,0x760e,0x02ff,
  0x11ff,0xe70e,0x04f0,0xe71c,0xd71c,0x8398,0x8410,0x840e,0x02f0,0x7410,0xc390,0x02ff,
  0x02ff,0x7380,0x0eff,0xe718,0x05f0,0xe71c,0x761c,0x8390,0x740e,0x8390,0x840e,0xc410,0x0010,0x01ff,
  0x01ff,0xc400,0xd61f,0x0618,0x0dff,0xe718,0x05f0,0xe71c,0x77dc,0x8390,0x740e,0x8390,0x02f0,0x840e,0x001f,0x01ff,
  0x01ff,0xc618,0x8410,0xc610,0x000e,0x0bff,0x7000,0xe71f,0x05f0,0xe71c,0xc71c,0x8410,0x8390,0x8410,0x7410,0x7390,0x041f,0x01ff,
  0xc000,0x7418,0x8390,0x840e,0x7618,0x0bff,0x7000,0x06f0,0xe71c,0x871c,0x02f0,0x8410,0x840e,0x8390,0x740e,0x0598,0x01ff,
  0xc600,0x840e,0x02f0,0x8410,0xd610,0x000e,0x0aff,0x7000,0x06f0,0xe71c,0xff1c,0x740e,0x8390,0x740e,0x8390,0x740e,0x7690,0x01ff,
  0x868e,0xc618,0x740e,0x8390,0x840e,0x039f,0x0bff,0x06f0,0xe71c,0xd71c,0x02f0,0x8390,0x8410,0x7410,0x8410,0xc610,0x01ff,
  0xc698,0xc410,0x7418,0x8390,0x740e,0x7698,0x0bff,0x07f0,0xe71c,0x05f0,0x8410,0xc390,0x000e,
  0x0398,0x01ff,0x77d0,0x8390,0x740e,0xfc10,0x0bff,0xe71f,0x05f0,0xe71c,0xd71c,0x8418,0x8410,0x02f0,0x840e,0x7410,0xc410,0x0010,
  0x02ff,0xc600,0x8410,0x840e,0xfc10,0x0010,0x0aff,0x06f0,0xe71c,0xe7dc,0x8398,0x8390,0x04f0,0x8410,0x0018,
  0x02ff,0xc000,0x7410,0x8390,0xc40e,0x0392,0x0aff,0x06f0,0xe71c,0xb69c,0x839a,0x740e,0x8390,0x740e,0x8390,0x840e,0x001a,
  0x02ff,0x8000,0x7418,0x8410,0x7410,0x061f,0x0aff,0x06f0,0xe71c,0xe69c,0x8418,0x8410,0x7410,0x02f0,0x8410,0x8390,0x0418,
  0x03ff,0x841f,0x8390,0x8410,0x77d8,0x0aff,0xe71f,0xe718,0xe71c,0xe618,0xc41c,0xd71c,0xff1f,0x8398,0x740e,0x8390,0x740e,0x8390,0x740e,0x0618,
  0x03ff,0x7618,0x8390,0x740e,0xc690,0x09ff,0x7000,0x061a,0xc380,0x061c,0x8000,0x01ff,0x768e,0xfc00,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x07d0,
  0x03ff,0x868e,0x02f0,0x8410,0xfe10,0x0aff,0x0010,0x01ff,0x038e,0x03ff,0xd380,0x7410,0x8390,0x740e,0x8390,0x740e,0x8390,0x77ce,
  0x03ff,0x87c0,0x740e,0x8390,0xc40e,0x0010,0x0fff,0xc400,0x03f0,0x8410,0x8390,0x8410,0x840e,0x768e,
  0x03ff,0xc400,0x03f0,0x8410,0x741f,0xc380,0x09f0,0xc618,0x7618,0x04ff,0xc7c0,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x760e,
  0x03ff,0xc380,0x8390,0x740e,0x8390,0xffd0,0x8610,0x09f0,0x8410,0xc410,0xc61a,0x8618,0x000e,0x01ff,0x77ce,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x7610,
  0x03ff,0xd380,0x7410,0x8390,0x740e,0xd410,0x8418,0x7410,0x8410,0x02f0,0x8390,0x740e,0x8390,0x740e,0x8410,0x840e,0x740e,0x8390,0xc60e,0xc69f,0x000e,0x8618,0x8390,0x7410,0x8410,0x840e,0x8410,0x8390,0x7610,
  0x02ff,0xc400,0xfe18,0x8398,0x740e,0x02f0,0x8390,0x87da,0x02f0,0x8410,0x8390,0x740e,0x8390,0x8410,0x8390,0x8410,0x7410,0x8390,0x840e,0x8410,0xc410,0x861f,0x8418,0x03f0,0x8410,0x02f0,0x7410,0x8410,0x7690,
  0x01ff,0x8000,0xc61f,0x8418,0x841a,0x02f0,0x8410,0x740e,0xfe10,0x741c,0x7410,0x02f0,0x8410,0x02f0,0x8390,0x7410,0x8390,0x840e,0x02f0,0x7410,0x840e,0x7410,0xfc10,0x8410,0x7410,0x8410,0x840e,0x03f0,0x8410,0x760e,
  0x01ff,0xc7ce,0x8410,0x8390,0x7618,0x7410,0x02f0,0x8410,0x7390,0xfe98,0x7618,0x8390,0x740e,0x8390,0x02f0,0x840e,0x740e,0x8390,0x02f0,0x8410,0x7410,0x8390,0xc410,0x8410,0x840e,0x8410,0x7410,0x8410,0x840e,0x8410,0x7690,
  0x8000,0x861a,0x7410,0x740e,0x77d8,0x8390,0x740e,0x8390,0x840e,0xc410,0xfe90,0xc618,0x8398,0x740e,0x8390,0x7410,0x8390,0xc60e,0x03f0,0x8410,0x7410,0x860e,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x0618,
  0xfb80,0x02f0,0x8410,0x8390,0xc60e,0x740e,0x8390,0x740e,0x7390,0x8410,0x8390,0x8610,0xfe98,0xfe18,0xc698,0x02f0,0xc618,0xc7d8,0x03f0,0x8390,0x8410,0x8618,0x7410,0x03f0,0x8410,0x8390,0x8410,0x8390,0x0618,
  0xc680,0x8390,0x740e,0x8390,0xfe10,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x7410,0xc390,0x02f0,0xc610,0x8610,0x8398,0x8390,0x740e,0x8390,0xc40e,0x8418,0x8410,0x8390,0x7410,0x04f0,0x8410,0x0398,
  0x760e,0x02f0,0x8410,0x7410,0xc390,0x839f,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x838e,0x8410,0x7410,0x8390,0x740e,0x8410,0x740e,0x8390,0x740e,0xc698,0x8410,0x840e,0x02f0,0x8410,0x7410,0x8410,0x8390,0x8410,0x039f,
  0x8418,0x840e,0x02f0,0x8390,0x740e,0x869c,0x8410,0x02f0,0x7410,0x8410,0x02f0,0x8390,0x8410,0x7410,0x8390,0x740e,0x8390,0x838e,0x8390,0x740e,0xc610,0x8610,0x02f0,0x8410,0x02f0,0x840e,0x8410,0x8390,0x8410,0x8390,0x0018,
  0x7418,0x02f0,0x8410,0x840e,0x8410,0xfe10,0x8418,0x06f0,0x8410,0x8390,0x740e,0x8390,0x740e,0x02f0,0x8410,0xc410,0x8612,0x05f0,0x8410,0x840e,0x02f0,0x8410,0xc410,0x0018,
  0x8398,0x8390,0x03f0,0x8410,0x7410,0xc618,0x02f0,0x8410,0x8390,0x8410,0x840e,0x8390,0x7410,0x8390,0x740e,0x8390,0x840e,0xc40e,0xc698,0x8390,0x8410,0x02f0,0x840e,0x03f0,0x8410,0x02f0,0x840e,0xc40e,0x000e,
  0x7418,0x8410,0x840e,0x02f0,0x7410,0x8410,0xc40e,0xc618,0x8398,0x740e,0x8390,0x740e,0x8390,0x840e,0xc390,0x03f0,0xc618,0xc61a,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0xc410,0x01ff,
  0x7418,0x04f0,0x8410,0x7410,0x8410,0x8610,0xd618,0xd61f,0x02f0,0xc618,0xd618,0xd69c,0xfe9f,0x87d2,0xc418,0x7410,0x02f0,0x8390,0x8410,0x840e,0x04f0,0x8410,0x8390,0x02f0,0x8410,0xc610,0x01ff,
  0x8418,0x02f0,0x8410,0x02f0,0x840e,0x02f0,0x8410,0x8390,0x840e,0x860e,0xc418,0x8610,0xc418,0x8610,0x7398,0x03f0,0x8410,0x8390,0x8410,0x840e,0x8410,0x02f0,0x840e,0x03f0,0x8410,0x02f0,0x8390,0x7610,0x01ff,
  0x8418,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x04f0,0x8410,0x840e,0x02f0,0x8410,0x02f0,0x8390,0x05f0,0x8410,0x03f0,0x7410,0x03f0,0x8410,0x0610,0x01ff,
  0x860e,0x8410,0x7410,0x02f0,0x8410,0x8390,0x02f0,0x8410,0x02f0,0x840e,0x02f0,0x8410,0x02f0,0x7410,0x8390,0x740e,0x8390,0x740e,0x8410,0x8390,0x8410,0x02f0,0x8390,0x03f0,0x8410,0x7410,0x02f0,0x8410,0x0398,0x01ff,
  0x87c0,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x840e,0x03f0,0x7410,0x02f0,0x8410,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0xc40e,0x0010,0x01ff,
  0xc400,0x840e,0x02f0,0x8410,0x8390,0x7410,0x8410,0x8390,0x7390,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0xfe0e,0x02ff,
  0xf800,0x8398,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x840e,0x8410,0x840e,0x8410,0x02f0,0x840e,0x8410,0x02f0,0x840e,0x7410,0x8410,0x7410,0x8410,0x02f0,0x840e,0x02f0,0x8410,0x02f0,0x7410,0x8410,0x07d8,0x02ff,
  0x7000,0x7412,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x02f0,0x8390,0x8410,0x8390,0x02f0,0x8410,0x840e,0x8410,0x7410,0x02f0,0x8410,0x840e,0x02f0,0x8410,0x02f0,0x7410,0x03f0,0x8410,0xb410,0x0018,0x02ff,
  0x01ff,0x8610,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x7410,0x8410,0x7410,0x07f0,0x8410,0x8390,0x8410,0x8390,0x03f0,0x8410,0x02f0,0x8390,0x8410,0xc710,0x03ff,
  0x01ff,0xc400,0x02f0,0x8410,0x8390,0x03f0,0x8410,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0xc410,0x041f,0x03ff,
  0x01ff,0x8000,0x8418,0x02f0,0x8410,0x840e,0x7410,0x8410,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0xc40e,0xc61f,0x000e,0x03ff,
  0x02ff,0xc40e,0x7410,0x8410,0x7410,0x8410,0x7410,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0xc610,0xc59f,0x000e,0x04ff,
  0x02ff,0x7000,0xc618,0x8398,0x03f0,0x8410,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0x8390,0x740e,0xc410,0xfe98,0x87da,0x0010,0x05ff,
  0x03ff,0x7000,0xd610,0xc61f,0x8618,0x840e,0x8390,0x02f0,0x8410,0x7410,0x8410,0x7410,0x8410,0x02f0,0x7410,0x02f0,0x8410,0xc410,0xc618,0xd618,0xc618,0x7418,0x000e,0x06ff,
  0x04ff,0x7000,0xc40e,0xfe90,0xe69f,0xc61a,0x08f0,0xc618,0xd618,0xc7d8,0x8618,0x8418,0x7618,0x09ff,
  0x07ff,0x7380,0x738e,0x8410,0xc418,0x8610,0xc418,0x8610,0xc418,0x8410,0x8418,0xc418,0x000e,0x0cff
};

#endif
