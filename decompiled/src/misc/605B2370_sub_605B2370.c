/* sub_605B2370
 * address: 0x605B2370   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B2370(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  ModelWrapper *v5; // r5
  void *model; // r6
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  v4 = FIELD_U16(a1, 6764);
  v2 = (_WORD *)(a1 + 6764);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v5 = *(ModelWrapper **)(a1 + 6100);
  model = FIELD_U32(v5, 0x0);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v5, 0x0) + 68))(FIELD_U32(v5, 0x0), a1 + 144);
  v8[0] = 1065353216;
  v8[1] = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[5] = 1065353216;
  v8[6] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 1065353216;
  v8[3] = FIELD_U32(a1, 108);
  v8[7] = FIELD_U32(a1, 112);
  v8[11] = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 60))(model, v8);
  ModelWrapper_updateModel(v5);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
