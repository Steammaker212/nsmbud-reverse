/* Player_playDownSound_7A6B18
 * address: 0x607A6B18   size: 480   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_playDownSound_7A6B18(_BYTE *a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int *v8; // r0
  int result; // r0
  float v10[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (int *)(a1 + 9696);
  v2 = *((_DWORD *)a1 + 2424);
  if ( v2 == 2 )
  {
    SE_PLY_SPLASH_POISON_ref((int)a1);
    v2 = *v3;
  }
  if ( v2 == 5 )
    *((_DWORD *)a1 + 301) |= 0x8000u;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1384))(a1);
  v4 = *((_DWORD *)a1 + 301);
  if ( (v4 & 0x8000) == 0 )
  {
    *((_DWORD *)a1 + 301) = v4 | 0x4000;
    v5 = dword_60C99DD4;
    v6 = FIELD_U32(dword_60C99DD4, 764);
    if ( v6 == 2 || (a1[1228] & 4) != 0 )
      goto LABEL_12;
    if ( v6 == 1 )
    {
      if ( sub_60766858() )
      {
LABEL_12:
        *((_DWORD *)a1 + 2428) = 30;
        goto LABEL_13;
      }
      v5 = dword_60C99DD4;
    }
    sub_603FB9A0(v5, (char)a1[84]);
    goto LABEL_12;
  }
LABEL_13:
  if ( (*(_BYTE *)(*((_DWORD *)a1 + 2840) + 196) & 4) != 0 )
  {
    sub_6075FEE4((int)a1, v10);
    *((float *)a1 + 28) = v10[1];
  }
  PlayerBase_dispatchVirtual3((int)(a1 + 11356), 84, 0.0);
  *((_DWORD *)a1 + 22) = 0;
  *((_DWORD *)a1 + 39) = 0;
  *((_DWORD *)a1 + 40) = 0;
  *((_DWORD *)a1 + 41) = 0;
  *((float *)a1 + 28) = *((float *)a1 + 28) + 2.0;
  (*(void (__fastcall **)(_BYTE *, float))(*(_DWORD *)a1 + 1084))(a1, 5500.0);
  *((_DWORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 30) = 0;
  *((_DWORD *)a1 + 31) = 0;
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 25) = 0;
  if ( (a1[1227] & 0x20) == 0 )
  {
    v7 = (char)a1[84];
    LODWORD(v10[0]) = 30;
    v8 = sub_60002B90(v7, unk_60C263EC);
    sub_607734E8(a1, (int)"SE_PLY_DOWN", 0, (int)v8);
  }
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, (char)a1[84], 4, 0, 0);
  result = *v3;
  if ( *v3 == 1 )
  {
    result = dword_60CBFA90;
    ++FIELD_U32(dword_60CBFA90, 456);
  }
  return result;
}
