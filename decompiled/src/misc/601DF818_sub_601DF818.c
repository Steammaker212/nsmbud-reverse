/* sub_601DF818
 * address: 0x601DF818   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DF818(int a1)
{
  int *v2; // r1
  int v3; // r2
  int v4; // r0
  int *v5; // r5
  int result; // r0
  _DWORD *v7; // r6
  char *v8; // r0
  int i; // r2
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int speed; // [sp+4h] [bp-24h] BYREF

  v2 = (int *)(a1 + 428);
  v3 = FIELD_U32(a1, 428);
  v5 = (int *)(a1 + 180);
  v4 = FIELD_U32(a1, 180);
  if ( v4 != v3 )
  {
    speed = 335544320;
    moveValueTo(v5, v2, &speed);
    v4 = *v5;
  }
  FIELD_U32(a1, 192) = v4;
  FIELD_U32(a1, 200) = 1084227584;
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  sub_60169030(a1, (float *)(a1 + 348), (float *)(a1 + 360), FIELD_U32(a1, 432));
  result = sub_601687F4((float *)a1, (float *)(a1 + 348), (float *)(a1 + 360));
  if ( result == 1 )
  {
    sub_6019EC34((_DWORD *)(a1 + 404), (_DWORD *)(a1 + 416));
    FIELD_U32(a1, 348) = FIELD_U32(a1, 360);
    FIELD_U32(a1, 352) = FIELD_U32(a1, 364);
    FIELD_U32(a1, 356) = FIELD_U32(a1, 368);
    v7 = (_DWORD *)sub_601E0010(a1 + 404);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    v8 = (char *)v7[1];
    if ( v8 == "W2M0" )
    {
LABEL_13:
      EffectData_init((EffectData *)(a1 + 448));
      StateMgr__changeState((StateMgr *)(a1 + 296), &stru_60C8B010);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    else
    {
      for ( i = 0; i <= 0x80000; ++i )
      {
        if ( v8[i] != aW2m0[i] )
          break;
        if ( !v8[i] )
          goto LABEL_13;
      }
      if ( sub_601DAE4C(a1 + 404, 16) )
      {
        v10 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
        sub_601B5110(v10, 2, 0, 0);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      }
      v11 = sub_601DFFE4(a1 + 404);
      v12 = (_DWORD *)sub_60178694(v11, FIELD_U32(a1, 432));
      FIELD_U32(a1, 416) = v12[21];
      FIELD_U32(a1, 420) = v12[22];
      FIELD_U32(a1, 424) = v12[24];
      v13 = (_DWORD *)sub_601E0040(a1 + 416);
      FIELD_U32(a1, 360) = *v13;
      FIELD_U32(a1, 364) = v13[1];
      FIELD_U32(a1, 368) = v13[2];
      result = sub_608332B0(a1 + 80, a1 + 360);
      FIELD_U32(a1, 428) = result;
    }
  }
  return result;
}
