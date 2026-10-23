/* sub_602CA34C
 * address: 0x602CA34C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CA34C(int a1)
{
  int v2; // r0
  char v3; // r5
  int v4; // r1
  char *v5; // r6
  float v7[3]; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+Ch] [bp-14h] BYREF

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    sub_602CA1DC(a1);
    if ( FIELD_U8(a1, 6608) )
      FIELD_U32(a1, 6568) = FIELD_U32(a1, 6596);
    v3 = 0;
    FIELD_U8(a1, 6608) = 0;
    sub_608337E0(a1 + 6568);
    v4 = FIELD_U32(a1, 164);
    if ( v4 < 0 )
      v4 = -v4;
    FIELD_U32(a1, 156) = FIELD_U32(a1, 6572) + (v4 >> 2);
    ((void (__fastcall *)(int *, _DWORD, float *, _DWORD, _DWORD, _DWORD, _DWORD))checkLiquidCollisions)(
      &v8,
      0,
      v7,
      FIELD_U8(a1, 86),
      FIELD_U32(a1, 108),
      FIELD_F32(a1, 112) + -10.0,
      FIELD_U32(a1, 116));
    v5 = (char *)(a1 + 6609);
    if ( (unsigned int)(v8 - 3) <= 1 )
    {
      v3 = 1;
      if ( !*v5 )
      {
        v7[0] = FIELD_F32(a1, 108) + (float)((float)((float)FIELD_S32(a1, 164) * -0.000061035) * 40.0);
        v7[1] = 0.0;
        v7[2] = 6500.0;
        (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 112))(a1, v7);
      }
    }
    *v5 = v3;
    FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
    SolidOnTopCollider_execute((ColliderBase *)(a1 + 6120));
  }
  return 1;
}
