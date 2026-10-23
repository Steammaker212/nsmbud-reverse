/* SE_OBJ_CS_WARP_CANNON_FLY_ref
 * address: 0x6080D658   size: 2072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CS_WARP_CANNON_FLY_ref(float a1, int a2, unsigned __int16 a3)
{
  int v5; // r1
  int v6; // r0
  float v7; // s0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  float v11; // s0
  float v12; // s18
  float v13; // s0
  float v14; // s18
  float v15; // s0
  float v16; // s18
  float v17; // s0
  float v18; // s18
  int v19; // r0
  float v20; // s0
  int v21; // r1
  int v22; // r0
  float v23; // s0
  int v24; // r1
  float v26; // s0
  _DWORD v27[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_608A8604(v27, SoundSystem_instance + 64);
  if ( a1 >= 0.0 )
  {
    if ( a1 > 1.0 )
      a1 = 1.0;
  }
  else
  {
    a1 = 0.0;
  }
  if ( v27[0] )
  {
    LOWORD(v5) = a3;
    HIWORD(v5) = -1;
    sub_608B7240(v27[0], v5 ^ 0xFFFF, 0.0);
  }
  if ( a3 == 384 )
  {
    v6 = v27[0];
    if ( !v27[0] )
      return sub_608A86F0(v27);
    v7 = 1.0;
    v8 = 128;
    goto LABEL_10;
  }
  sub_60808374((_DWORD *)SoundSystem_instance, (int)"SE_OBJ_CS_WARP_CANNON_FLY", 0, 0);
  if ( a3 <= 0x101u )
  {
    switch ( a3 )
    {
      case 6u:
        if ( v27[0] )
        {
          sub_608B7240(v27[0], 2, 1.0 - a1);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 4;
            goto LABEL_12;
          }
        }
        break;
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x13u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
      case 0x80u:
      case 0x81u:
      case 0x83u:
      case 0x85u:
      case 0x86u:
      case 0x87u:
      case 0x89u:
      case 0x8Au:
      case 0x8Bu:
      case 0x8Cu:
      case 0x8Du:
      case 0x8Eu:
      case 0x8Fu:
        return sub_608A86F0(v27);
      case 0xAu:
        if ( v27[0] )
        {
          sub_608B7240(v27[0], 2, 1.0 - a1);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 8;
            goto LABEL_12;
          }
        }
        break;
      case 0xCu:
        v16 = 0.0;
        if ( a1 >= 0.5 )
        {
          v17 = sub_6080E4E0(a1, 0.5, 1.0, 0.0, 1.0);
          if ( v17 >= 0.0 )
          {
            v16 = v17;
            if ( v17 > 1.0 )
              v16 = 1.0;
          }
        }
        if ( v27[0] )
        {
          sub_608B7240(v27[0], 4, 1.0 - v16);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 8;
            v11 = v16;
            goto LABEL_36;
          }
        }
        break;
      case 0x12u:
        if ( a1 >= 0.3 )
        {
          v18 = 0.0;
          v26 = sub_6080E4E0(a1, 0.3, 1.0, 0.0, 1.0);
          if ( v26 >= 0.0 )
          {
            v18 = v26;
            if ( v26 > 1.0 )
              v18 = 1.0;
          }
        }
        else
        {
          v18 = 0.0;
        }
        if ( v27[0] )
        {
          sub_608B7240(v27[0], 2, 1.0 - v18);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 16;
            v11 = v18;
            goto LABEL_36;
          }
        }
        break;
      case 0x14u:
        v19 = v27[0];
        if ( v27[0] )
        {
          v20 = 1.0;
          v21 = 4;
          goto LABEL_69;
        }
        break;
      case 0x18u:
        v19 = v27[0];
        if ( v27[0] )
        {
          v20 = 1.0;
          v21 = 8;
LABEL_69:
          sub_608B7240(v19, v21, v20 - a1);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 16;
            goto LABEL_12;
          }
        }
        break;
      case 0x22u:
        v22 = v27[0];
        if ( v27[0] )
        {
          v23 = 1.0;
          v24 = 2;
          goto LABEL_79;
        }
        break;
      case 0x24u:
        v22 = v27[0];
        if ( v27[0] )
        {
          v23 = 1.0;
          v24 = 4;
          goto LABEL_79;
        }
        break;
      case 0x28u:
        v22 = v27[0];
        if ( v27[0] )
        {
          v23 = 1.0;
          v24 = 8;
          goto LABEL_79;
        }
        break;
      case 0x30u:
        v22 = v27[0];
        if ( v27[0] )
        {
          v23 = 1.0;
          v24 = 16;
LABEL_79:
          sub_608B7240(v22, v24, v23 - a1);
          v9 = v27[0];
          if ( v27[0] )
          {
            v10 = 32;
            goto LABEL_12;
          }
        }
        break;
      case 0x82u:
      case 0x84u:
      case 0x88u:
      case 0x90u:
LABEL_81:
        sub_6080DE84(a1);
        break;
      default:
        if ( a3 == 160 )
        {
          v14 = 0.0;
          if ( a1 >= 0.5 )
          {
            v15 = sub_6080E4E0(a1, 0.5, 1.0, 0.0, 1.0);
            if ( v15 >= 0.0 )
            {
              v14 = v15;
              if ( v15 > 1.0 )
                v14 = 1.0;
            }
          }
          if ( v27[0] )
          {
            sub_608B7240(v27[0], 32, 1.0 - v14);
            v9 = v27[0];
            if ( v27[0] )
            {
              v10 = 128;
              v11 = v14;
              goto LABEL_36;
            }
          }
        }
        break;
    }
    return sub_608A86F0(v27);
  }
  if ( a3 < 0x280u )
  {
    switch ( a3 )
    {
      case 0x102u:
      case 0x104u:
      case 0x108u:
      case 0x110u:
        goto LABEL_81;
      case 0x103u:
      case 0x105u:
      case 0x106u:
      case 0x107u:
      case 0x109u:
      case 0x10Au:
      case 0x10Bu:
      case 0x10Cu:
      case 0x10Du:
      case 0x10Eu:
      case 0x10Fu:
      case 0x111u:
      case 0x112u:
      case 0x113u:
      case 0x114u:
      case 0x115u:
      case 0x116u:
      case 0x117u:
      case 0x118u:
      case 0x119u:
      case 0x11Au:
      case 0x11Bu:
      case 0x11Cu:
      case 0x11Du:
      case 0x11Eu:
      case 0x11Fu:
        return sub_608A86F0(v27);
      case 0x120u:
        v6 = v27[0];
        if ( !v27[0] )
          return sub_608A86F0(v27);
        v7 = 1.0;
        v8 = 32;
        break;
      default:
        if ( (unsigned int)a3 - 514 <= 0x1E && ((1 << (a3 - 2)) & 0x40004045) != 0 )
          goto LABEL_18;
        return sub_608A86F0(v27);
    }
LABEL_10:
    sub_608B7240(v6, v8, v7 - a1);
    v9 = v27[0];
    if ( v27[0] )
    {
      v10 = 256;
LABEL_12:
      v11 = a1;
      goto LABEL_36;
    }
    return sub_608A86F0(v27);
  }
  if ( a3 > 0x401u )
  {
    if ( ((unsigned int)a3 - 1026 > 0x1E || ((1 << (a3 - 2)) & 0x40004045) == 0) && a3 != 1152 && a3 != 1280 )
      return sub_608A86F0(v27);
    v9 = v27[0];
    if ( !v27[0] )
      return sub_608A86F0(v27);
    v10 = a3 & 0xFBFF;
    v11 = 1.0 - a1;
LABEL_36:
    sub_608B7240(v9, v10, v11);
    return sub_608A86F0(v27);
  }
  if ( a3 != 640 && a3 != 768 )
    return sub_608A86F0(v27);
LABEL_18:
  if ( a1 >= 0.7 )
  {
    v12 = 0.0;
  }
  else
  {
    v12 = 0.0;
    v13 = sub_6080E4E0(a1, 0.7, 0.0, 0.0, 1.0);
    if ( v13 >= 0.0 )
    {
      v12 = v13;
      if ( v13 > 1.0 )
        v12 = 1.0;
    }
  }
  v9 = v27[0];
  if ( v27[0] )
  {
    v11 = v12;
    v10 = a3 & 0xFDFF;
    goto LABEL_36;
  }
  return sub_608A86F0(v27);
}
