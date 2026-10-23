/* sub_607988F4
 * address: 0x607988F4   size: 1068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607988F4(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r1
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int result; // r0
  int *v11; // r5
  int v12; // r1
  char v13; // r3
  int v14; // r1
  int v15; // r1
  unsigned int v16; // r1
  int v17; // r2
  unsigned int v18; // r0
  int v19; // r1
  int v20; // r0

  v3 = FIELD_U32(a1, 12212);
  v2 = (_DWORD *)(a1 + 12212);
  v4 = FIELD_U8(dword_60C9CF0C, 1404) & (1 << *((_BYTE *)v2 - 12128));
  if ( v3 )
  {
    if ( !v4 )
    {
      *v2 = 0;
      v5 = 156;
LABEL_6:
      PlayerBase_dispatchVirtual3(a1 + 11356, v5, 0.0);
    }
  }
  else if ( v4 )
  {
    *v2 = 1;
    v5 = 155;
    goto LABEL_6;
  }
  v6 = FIELD_U32(a1, 1236);
  FIELD_U32(a1, 1236) = v6 & 0xFFFFFFFB;
  v7 = FIELD_U32(dword_60CBFA90, 472);
  if ( v7 )
  {
    if ( (v8 = FIELD_U32(dword_60C995D0, 32)) != 0 && v8 == v7 || FIELD_U32(v7, 20) || FIELD_U32(v7, 16) )
      FIELD_U32(a1, 1236) = v6 | 4;
  }
  v9 = FIELD_U32(a1, 1216);
  if ( (v9 & 0x20000000) != 0 )
  {
    if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
      STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_817284(dword_60CC6B68);
    if ( !FIELD_U32(a1, 12208) && (FIELD_U8(a1, 1206) & 1) == 0 )
    {
      FIELD_U32(dword_60CC62E4, 108) = 196610;
      sub_603F48DC(AreaTask_intance);
      FIELD_U32(a1, 1204) |= 0x10000u;
    }
    v9 = FIELD_U32(a1, 1216);
  }
  if ( v9 < 0 && !FIELD_U32(a1, 12208) && (FIELD_U8(a1, 1206) & 1) == 0 )
  {
    FIELD_U32(dword_60CC62E4, 108) = 196610;
    sub_603F48DC(AreaTask_intance);
    FIELD_U32(a1, 1204) |= 0x10000u;
  }
  FIELD_U32(a1, 160) = 0;
  v11 = (int *)(a1 + 9940);
  result = FIELD_U32(a1, 9940);
  switch ( result )
  {
    case 0:
    case 1:
    case 6:
      if ( !FIELD_U32(a1, 9944) )
      {
        v12 = FIELD_S8(a1, 84);
        v13 = v12;
        if ( (unsigned __int8)v12 >= 6u )
          v12 = 0;
        v14 = dword_60C99DD4 + 72 * v12;
        if ( FIELD_U8(v14, 292) && FIELD_S32(v14, 296) < 1 )
        {
          *v11 = 5;
          result = 5;
        }
        else
        {
          FIELD_U32(a1, 1224) |= 2u;
          FIELD_U32(a1, 1204) &= ~0x4000u;
          v15 = FIELD_U32(a1, 1216);
          if ( (v15 & 0x40000000) != 0 )
          {
            sub_60773630(a1, 17, 0);
            v13 = FIELD_U8(a1, 84);
            result = *v11;
            v15 = FIELD_U32(a1, 1216);
          }
          v16 = v15 & 0xBFFFFFFF;
          v17 = 0;
          if ( result == 1 )
            v17 = 2;
          FIELD_U32(a1, 1216) = v16;
          sub_603F5B3C(dword_60C99D88, (Vec3 *)(a1 + 108), v17, v13);
          *v11 = 2;
          result = 2;
        }
      }
      break;
    case 2:
      result = FIELD_U32(a1, 1224) | 0x100000;
      FIELD_U32(a1, 1224) = result;
      break;
    case 3:
      result = dword_60C9CF0C;
      if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
      {
        *v11 = 0;
        result = 30 * ((5 * (unsigned __int64)sead__Random__getU32((void *)(result + 1340))) >> 32);
        FIELD_U32(a1, 9944) = result;
      }
      break;
    case 4:
      FIELD_U32(a1, 1224) |= 2u;
      *v11 = 2;
      result = (int)sub_603F5B3C(dword_60C99D88, (Vec3 *)(a1 + 108), 1, FIELD_S8(a1, 84));
      break;
    case 5:
      if ( !FIELD_U8(PlayerMgr_instance, 148) )
        SE_GAKKI_ref((int *)(a1 + 14980));
      v18 = FIELD_U8(a1, 84);
      v19 = 0;
      if ( v18 < 6 )
        v19 = (char)v18;
      v20 = dword_60C99DD4 + 72 * v19;
      if ( !FIELD_U8(v20, 292) || (result = FIELD_U32(v20, 296), result >= 1) )
      {
        if ( sub_6075EDF8(a1) )
          FIELD_U32(a1, 1216) |= 0x40000000u;
        else
          sub_60773630(a1, 17, 0);
        *v11 = 0;
        result = 9944;
        FIELD_U32(a1, 9944) = 60;
      }
      break;
    default:
      return result;
  }
  return result;
}
