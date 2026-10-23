/* Player_poisonDownUpdate
 * address: 0x607A0E98   size: 724   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_poisonDownUpdate(float *a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r0
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r0
  const char *v11; // r5
  int *v12; // r1
  int v13; // r2
  float *v14; // r0
  int v15; // r1
  int v16; // [sp+4h] [bp-5Ch] BYREF

  v4 = 0;
  if ( ((_DWORD)a1[301] & 0x24000) != 0 )
    return v4;
  v5 = *((_DWORD *)a1 + 304);
  if ( (v5 & 0x8000000) != 0 )
    return v4;
  v4 = 1;
  switch ( a3 )
  {
    case 0:
      if ( !a2 )
        goto LABEL_17;
      v9 = v5 & 0x10;
      v8 = v9 == 0;
      if ( v9 )
        v8 = (FIELD_U8(a2, 569) & 2) == 0;
      if ( v8 )
        goto LABEL_17;
      v4 = 0;
      if ( (*(int (__fastcall **)(float *, int, bool, _DWORD, _DWORD))(*(_DWORD *)a1 + 1420))(
             a1,
             4,
             (float)((float)(FIELD_F32(a2, 584) - a1[146]) * flt_60B0A898[*((_DWORD *)a1 + 20)]) < 0.0,
             0,
             0) == 1 )
      {
        v4 = 1;
        *((_DWORD *)a1 + 304) |= 0x100u;
      }
      return v4;
    case 1:
    case 3:
LABEL_17:
      v10 = *((_DWORD *)a1 + 330);
      switch ( v10 )
      {
        case 3:
          goto LABEL_20;
        case 1:
          sub_607A2894(a1, 0);
          break;
        case 0:
          goto LABEL_20;
        default:
          v4 = 1;
          sub_607A2894(a1, 1);
          break;
      }
      return v4;
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return (*(int (__fastcall **)(float *, int, int))(*(_DWORD *)a1 + 1416))(a1, a3, a2);
    case 9:
    case 10:
      LavaDown_type_d_mode_d_IsPassingDown_s_ref(a1, a3);
      return v4;
    case 11:
    case 12:
      v7 = *((_DWORD *)a1 + 330);
      if ( a3 != 11 )
      {
        if ( v7 != 1 )
          goto LABEL_31;
LABEL_30:
        v14 = a1;
        v15 = 0;
        goto LABEL_32;
      }
      switch ( v7 )
      {
        case 3:
LABEL_20:
          sub_60777FB4(dword_60CBFA90, (int *)a1, 0);
          return 1;
        case 1:
          goto LABEL_30;
        case 0:
          goto LABEL_20;
      }
LABEL_31:
      v14 = a1;
      v15 = 1;
LABEL_32:
      sub_607A2894(v14, v15);
      Player_changeState((int)a1, (StateBase *)&dword_60CC4E8C, 0);
      return 1;
    case 13:
      Player_changeState((int)a1, (StateBase *)&dword_60CC4ECC, 0);
      return v4;
    case 14:
      v11 = "false";
      if ( *((_BYTE *)a1 + 15076) )
        v11 = "true";
      sub_6016ACE0(
        &v16,
        "[PoisonDown] type=%d,mode=%d,IsPassingDown=%s",
        *((_DWORD *)a1 + 329),
        *((_DWORD *)a1 + 330),
        v11);
      v12 = (int *)a1;
      v13 = 3;
      goto LABEL_27;
    case 15:
      v12 = (int *)a1;
      v13 = 0;
      goto LABEL_27;
    case 16:
      v12 = (int *)a1;
      v13 = 4;
LABEL_27:
      sub_60777FB4(dword_60CBFA90, v12, v13);
      return v4;
    case 17:
    case 18:
      sub_607A7AA4(a1, a2);
      return v4;
    case 19:
      sub_60765E4C((int)a1);
      return v4;
    default:
      return v4;
  }
}
