/* sub_60734E40
 * address: 0x60734E40   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_60734E40(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C22814;
  RectCollider_ctor((RectCollider *)&a1[1]._._._.heap);
  a1[1]._._._.heap = (int)off_60BC30D8;
  a1[1]._.collisionMgr[12] = 0;
  a1[1]._.collisionMgr[13] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[16] = 0;
  a1[1]._.collisionMgr[20] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[24] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[28] = 0;
  a1[1]._.collisionMgr[32] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[56] = 0;
  a1[1]._.collisionMgr[60] = 0;
  a1[1]._.collisionMgr[54] = 0;
  *(_WORD *)&a1[1]._.collisionMgr[52] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[48] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[44] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[36] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[40] = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._.collisionMgr[64]);
  *(_DWORD *)&a1[1]._.collisionMgr[64] = off_60BC6E38;
  *(_DWORD *)&a1[1]._.collisionMgr[80] = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._.collisionMgr[84]);
  *(_DWORD *)&a1[1]._.collisionMgr[84] = off_60BC6E38;
  *(_DWORD *)&a1[1]._.collisionMgr[100] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[108] = off_60C2293C;
  *(_DWORD *)sub_60479414((int)&a1[1]._.collisionMgr[108], (int)&a1[1]._.collisionMgr[3676], 2) = off_60C2293C;
  agl_TextureData_ref(&a1[1]._.collisionMgr[3676]);
  *(_DWORD *)&a1[1]._.collisionMgr[3948] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3952] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3956] = 0;
  sub_60959B54(&a1[1]._.collisionMgr[3964]);
  *(_DWORD *)&a1[1]._.collisionMgr[4432] = (char *)a1 + 11188;
  *(_DWORD *)&a1[1]._.collisionMgr[4428] = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&a1[1]._.collisionMgr[4436] = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[1]._.collisionMgr[4428]);
  **(_BYTE **)&a1[1]._.collisionMgr[4432] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4428] = &off_60BD4BF0;
  agl_TextureData_ref(&a1[1]._.collisionMgr[4508]);
  *(_DWORD *)&a1[1]._.collisionMgr[4780] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4784] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4788] = 0;
  sub_60959B54(&a1[1]._.collisionMgr[4796]);
  *(_DWORD *)&a1[1]._.collisionMgr[5264] = (char *)a1 + 12020;
  *(_DWORD *)&a1[1]._.collisionMgr[5260] = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&a1[1]._.collisionMgr[5268] = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[1]._.collisionMgr[5260]);
  **(_BYTE **)&a1[1]._.collisionMgr[5264] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[5260] = &off_60BD4BF0;
  *(_DWORD *)&a1[1]._.collisionMgr[5340] = 0;
  return a1;
}
