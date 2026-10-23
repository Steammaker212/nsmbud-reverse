/* ChallengeSelectScene_ref
 * address: 0x607E2840   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeSelectScene_ref(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ChallengeSelectScene");
  *(_DWORD *)a1 = off_60C2693C;
  FIELD_U32(a1, 192) = &off_60C269CC;
  FIELD_U32(a1, 196) = &off_60C269DC;
  FIELD_U32(a1, 200) = &off_60C26A00;
  FIELD_U32(a1, 204) = a1;
  FIELD_U32(a1, 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC59FC);
  FIELD_U32(a1, 192) = &off_60C269BC;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  FIELD_U32(a1, 244) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 248) = &byte_60ABC94D;
  FIELD_U32(a1, 228) = off_60C5E9A4;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 1;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 296));
  sub_6090C6DC(a1 + 384);
  return a1;
}
