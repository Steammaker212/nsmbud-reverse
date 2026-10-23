/* sub_60194774
 * address: 0x60194774   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60194774(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r0
  float v5; // s2
  float v6; // s4
  int v7; // r0
  unsigned int U32; // r5
  unsigned int v9; // r6
  float v10; // s6
  float v11; // s4
  float v12; // s2

  v2 = FIELD_U32(a1, 320);
  if ( v2 == 20 )
  {
    v3 = 1.0;
    v4 = 8;
    v5 = 1.0;
    v6 = 1.0;
  }
  else
  {
    if ( v2 == 2 )
    {
      v7 = sub_601CF9C0(dword_60C8AEF0);
      sub_601B5110(v7, 5, 0, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    else if ( v2 == 1 )
    {
      sub_601CFFEC(dword_60C8AEF0, 0);
    }
    U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    v9 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    LODWORD(v10) = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000;
    v4 = 4;
    v3 = (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) + 0.5;
    v5 = (float)(COERCE_FLOAT((v9 >> 9) | 0x3F800000) + -1.0) + 0.5;
    v6 = (float)(v10 + -1.0) + 0.5;
  }
  FIELD_F32(a1, 352) = v3;
  FIELD_F32(a1, 356) = v5;
  FIELD_F32(a1, 360) = v6;
  FIELD_U32(a1, 368) = v4;
  v11 = FIELD_F32(a1, 336) + v6;
  v12 = (float)(FIELD_F32(a1, 332) + v5) * 0.5;
  FIELD_F32(a1, 340) = (float)(FIELD_F32(a1, 328) + v3) * 0.5;
  FIELD_F32(a1, 344) = v12;
  FIELD_F32(a1, 348) = v11 * 0.5;
  FIELD_U32(a1, 364) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 304), &stru_60C89ABC);
}
