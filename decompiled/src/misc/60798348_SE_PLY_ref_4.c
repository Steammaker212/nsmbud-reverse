/* SE_PLY_ref_4
 * address: 0x60798348   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_PLY_ref_4(unsigned __int8 *a1)
{
  _DWORD *v2; // r1
  int v3; // r1
  int v4; // r0
  int *v5; // r5
  bool v6; // zf
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r2
  int *v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  bool v18; // zf

  FIELD_U32(PlayerMgr_instance, 144) |= 1 << a1[84];
  sub_60794A90(*((_DWORD *)a1 + 162), 1);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 188))(a1);
  sub_607736A8();
  sub_607736A8();
  sub_607736A8();
  sub_607736A8();
  sub_607736A8();
  sub_6079EA38(a1);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 1208))(a1);
  *((_DWORD *)a1 + 2393) = 0;
  *((_DWORD *)a1 + 19) |= 4u;
  *((_DWORD *)a1 + 3053) = 1;
  v2 = a1 + 12212;
  if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << a1[84])) != 0 )
  {
    *v2 = 1;
    v3 = 155;
  }
  else
  {
    *v2 = 0;
    v3 = 156;
  }
  PlayerBase_dispatchVirtual3((int)(a1 + 11356), v3, 0.0);
  *((_DWORD *)a1 + 304) |= 0x8000000u;
  *((_DWORD *)a1 + 308) |= 0x20000000u;
  *((_DWORD *)a1 + 309) |= 0x10000u;
  *((_DWORD *)a1 + 307) |= 0x20000u;
  *((_DWORD *)a1 + 306) |= 0x100000u;
  *((_DWORD *)a1 + 303) |= 0x20u;
  *((_DWORD *)a1 + 301) |= 0x10u;
  *((_DWORD *)a1 + 25) = 0;
  *((_DWORD *)a1 + 24) = -1065353216;
  *((_DWORD *)a1 + 26) = 0;
  *((_DWORD *)a1 + 31) = 0;
  *((_DWORD *)a1 + 22) = 0;
  v4 = *((_DWORD *)a1 + 2484);
  *((_DWORD *)a1 + 2485) = v4;
  v5 = (int *)(a1 + 9940);
  switch ( v4 )
  {
    case 0:
    case 1:
    case 6:
      goto LABEL_5;
    case 3:
      v9 = sub_60789CF0();
      v10 = a1[84];
      v11 = 0;
      if ( v10 < 6 )
        v11 = (char)v10;
      if ( !*(_BYTE *)(v9 + 72 * v11 + 49) )
      {
        *v5 = 1;
        *((_DWORD *)a1 + 301) |= 0x4000u;
LABEL_9:
        *((_DWORD *)a1 + 2486) = 0;
        goto LABEL_19;
      }
      v4 = *v5;
LABEL_5:
      v6 = v4 == 6;
      if ( v4 != 6 )
        v6 = v4 == 1;
      *((_DWORD *)a1 + 301) |= 0x4000u;
      if ( v6 )
        goto LABEL_9;
      v7 = a1 + 9944;
      v8 = dword_60C99DD4;
      if ( FIELD_U32(dword_60C99DD4, 764) == 2
        || (*v7 = 150, FIELD_U32(v8, 764) == 1) && !sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
      {
        *v7 = 30;
      }
LABEL_19:
      v13 = a1[84];
      v14 = 0;
      if ( v13 < 6 )
        v14 = (char)v13;
      v15 = dword_60C99DD4 + 72 * v14;
      if ( FIELD_U8(v15, 292) && FIELD_S32(v15, 296) <= 0 )
        *v5 = 5;
LABEL_24:
      FIELD_U16(PlayerMgr_instance, 66) &= ~(1 << a1[84]);
      if ( !sub_603FD530((unsigned int *)(dword_60C99DD4 + 764))
        && !sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
      {
        *((_DWORD *)a1 + 304) |= 0x20000000u;
        *((_DWORD *)a1 + 3052) = 210;
        FIELD_U8(PlayerMgr_instance, 156) = 1;
      }
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)a1 + 2842) + 184))(*((_DWORD *)a1 + 2842), 0);
      *((_DWORD *)a1 + 3007) = 1065353216;
      v16 = a1 + 12028;
      v17 = *((_DWORD *)a1 + 330);
      v18 = v17 == 0;
      if ( v17 )
        v18 = v17 == 3;
      if ( !v18 )
      {
        *v16 = 1063675494;
        if ( v17 == 9 )
          *v16 = *(_DWORD *)"fff?";
      }
      sub_607957D4((int)a1, 1);
      (*(void (__fastcall **)(unsigned __int8 *, float))(*(_DWORD *)a1 + 1084))(a1, 8000.0);
      return sub_60786034((_DWORD *)a1 + 3745, (char)a1[84]);
    case 4:
      v12 = sub_60002B90((char)a1[84], unk_60C26430);
      sub_607734E8(a1, (int)"SE_PLY_BALLOON_SELF", 0, (int)v12);
      goto LABEL_24;
    default:
      goto LABEL_24;
  }
}
