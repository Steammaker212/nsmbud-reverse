/* Player_playDownSound_7A75EC
 * address: 0x607A75EC   size: 436   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Player_playDownSound_7A75EC(_BYTE *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r0
  float v8[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( *((_DWORD *)a1 + 1769) == 8 )
    SE_PLY_SPLASH_LAVA_ref_76CCA4((int)a1);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1384))(a1);
  v2 = *((_DWORD *)a1 + 301);
  if ( (v2 & 0x8000) == 0 )
  {
    *((_DWORD *)a1 + 301) = v2 | 0x4000;
    v3 = dword_60C99DD4;
    v4 = FIELD_U32(dword_60C99DD4, 764);
    if ( v4 == 2 || (a1[1228] & 4) != 0 )
      goto LABEL_10;
    if ( v4 == 1 )
    {
      if ( sub_60766858() )
      {
LABEL_10:
        *((_DWORD *)a1 + 2428) = 30;
        goto LABEL_11;
      }
      v3 = dword_60C99DD4;
    }
    sub_603FB9A0(v3, (char)a1[84]);
    goto LABEL_10;
  }
LABEL_11:
  if ( (*(_BYTE *)(*((_DWORD *)a1 + 2840) + 196) & 4) != 0 )
  {
    sub_6075FEE4((int)a1, v8);
    *((float *)a1 + 28) = v8[1];
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
  (*(void (__fastcall **)(_BYTE *, float))(*(_DWORD *)a1 + 1084))(a1, 3000.0);
  if ( (a1[1227] & 0x20) == 0 )
  {
    v5 = (char)a1[84];
    LODWORD(v8[0]) = 30;
    v6 = sub_60002B90(v5, unk_60C263EC);
    sub_607734E8(a1, (int)"SE_PLY_DOWN", 0, (int)v6);
  }
  return AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, (char)a1[84], 4, 0, 0);
}
