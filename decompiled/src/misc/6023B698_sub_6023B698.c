/* sub_6023B698
 * address: 0x6023B698   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6023B698(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  void (__fastcall *v6)(int, int *); // r2
  int *v7; // r1
  _BYTE *v8; // r5
  int v9; // r0
  signed int v10; // r1
  _DWORD *v11; // r0
  int *v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *result; // r0
  int v16; // r1
  int v17; // r1
  char v18; // [sp+3h] [bp-15h] BYREF
  signed int v19; // [sp+4h] [bp-14h] BYREF

  v4 = FIELD_U32(a1, 12080);
  v2 = (_DWORD *)(a1 + 12080);
  v3 = v4;
  if ( v4 && (v5 = v3 - 1, (*v2 = v5) != 0) )
  {
    v18 = 0;
    if ( ((int (__fastcall *)(int, char *))loc_6023F1A8)(a1, &v18) != 1 )
      goto LABEL_8;
    FIELD_U32(a1, 12064) = 0;
    v6 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    if ( v18 )
      v7 = &dword_60C8DA18;
    else
      v7 = (int *)&unk_60C8DA58;
  }
  else
  {
    FIELD_U32(a1, 12064) = 0;
    v6 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v7 = (int *)&unk_60C8DA58;
  }
  v6(a1, v7);
LABEL_8:
  v8 = (_BYTE *)(a1 + 12105);
  if ( !FIELD_U8(a1, 12105) )
    goto LABEL_15;
  v9 = FIELD_U32(a1, 80);
  v10 = -67108864;
  if ( !v9 )
    v10 = 0x4000000;
  v19 = v10;
  if ( sub_6083246C((int *)(a1 + 160), (int *)&unk_60C8DB10 + v9 + 1, &v19) == 1 )
  {
    *v8 = 0;
  }
  else if ( *v8 )
  {
    goto LABEL_15;
  }
  sub_6023D424(4.0);
LABEL_15:
  sub_6023ECEC(a1);
  nullsub_7();
  v11 = *(_DWORD **)(a1 + 6604);
  v12 = (int *)v11[3];
  v13 = v11[2];
  v14 = v11[17];
  if ( v13 > v14 )
    v12 += v14;
  Animation_update(*v12);
  result = (_DWORD *)(a1 + 12068);
  v16 = FIELD_U32(a1, 12068);
  if ( !v16 || (v17 = v16 - 1, (*result = v17) == 0) )
  {
    *result = 24;
    return (_DWORD *)sub_6071689C(TileMgr_instance, 10, 3, 0);
  }
  return result;
}
