/* LightSource_update1_helper_helper_424120
 * address: 0x60424120   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LightSource_update1_helper_helper_424120(int a1)
{
  _DWORD *v2; // r0

  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 61;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 1065353216;
  FIELD_U32(a1, 28) = 1065353216;
  FIELD_U8(a1, 32) = 0;
  FIELD_U32(a1, 48) = 1065353216;
  v2 = (_DWORD *)(a1 + 36);
  *v2 = 1065353216;
  v2[1] = 1065353216;
  v2[2] = 1065353216;
  FIELD_U8(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U8(a1, 64) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 61;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 1109917696;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U8(a1, 92) = 0;
  FIELD_U32(a1, 108) = &off_60BFA358;
  FIELD_U32(a1, 112) = &off_60BFA368;
  FIELD_U32(a1, 116) = &off_60BFA38C;
  FIELD_U32(a1, 120) = a1 + 72;
  FIELD_U32(a1, 124) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 128), (StateExecuter *)(a1 + 112), (StateBase *)&dword_60C9BB54);
  FIELD_U32(a1, 108) = &off_60BFA348;
  FIELD_U32(a1, 144) = 61;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1109917696;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 1065353216;
  FIELD_U8(a1, 164) = 0;
  FIELD_U32(a1, 180) = &off_60BFA358;
  FIELD_U32(a1, 184) = &off_60BFA368;
  FIELD_U32(a1, 188) = &off_60BFA38C;
  FIELD_U32(a1, 192) = a1 + 144;
  FIELD_U32(a1, 196) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 200), (StateExecuter *)(a1 + 184), (StateBase *)&dword_60C9BB54);
  FIELD_U32(a1, 180) = &off_60BFA348;
  return a1;
}
