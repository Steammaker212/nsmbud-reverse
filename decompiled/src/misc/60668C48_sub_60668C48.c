/* sub_60668C48
 * address: 0x60668C48   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60668C48(int a1, ActorBuildInfo *a2)
{
  int v3; // r6
  int v4; // r1
  int v5; // r2
  int v6; // r0

  sub_606429C0((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C15124;
  FIELD_U32(a1, 6152) = 0;
  FIELD_U32(a1, 6148) = 0;
  FIELD_U32(a1, 6144) = 0;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U32(a1, 6136) = 0;
  FIELD_U32(a1, 6132) = 0;
  memset((void *)(a1 + 6204), 0, 36);
  v3 = a1 + 6240;
  do
  {
    SolidOnTopCollider_ctor((SolidOnTopCollider *)v3);
    *(_DWORD *)v3 = SolidOnTopColliderWrapper_vtable;
    memset(v3 + 368, 0, 48);
    ColliderNode_ctor((ColliderNode *)(v3 + 384));
    FIELD_U32(v3, 420) = 0;
    FIELD_U32(v3, 424) = 0;
    FIELD_U32(v3, 428) = 0;
    FIELD_U32(v3, 432) = 0;
    FIELD_U32(v3, 436) = 0;
    FIELD_U32(v3, 440) = 0;
    FIELD_U32(v3, 444) = 0;
    FIELD_U32(v3, 416) = 0;
    ColliderNode_ctor((ColliderNode *)(v3 + 416));
    FIELD_U32(v3, 380) = 0;
    FIELD_U32(v3, 376) = 0;
    FIELD_U32(v3, 372) = 0;
    FIELD_U32(v3, 368) = 0;
    v4 = FIELD_U32(v3, 304);
    v5 = FIELD_U32(v3, 308);
    FIELD_U32(v3, 412) = v5;
    FIELD_U32(v3, 408) = v4;
    FIELD_U32(v3, 440) = v4;
    FIELD_U32(v3, 444) = v5;
    SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)v3, 1, v3 + 368, v3 + 384, v6);
    v3 += 448;
  }
  while ( v3 != a1 + 8928 );
  FIELD_U32(a1, 8928) = 0;
  memset((void *)(a1 + 9064), 0, 92);
  FIELD_U32(a1, 9156) = 1065353216;
  FIELD_U8(a1, 9160) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9164));
  FIELD_U32(a1, 9164) = off_60BC6E38;
  FIELD_U32(a1, 9180) = 0;
  memset((void *)(a1 + 8932), 0, 132);
  FIELD_U32(a1, 9184) = 0;
  memset((void *)(a1 + 9320), 0, 92);
  FIELD_U32(a1, 9412) = 1065353216;
  FIELD_U8(a1, 9416) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9420));
  FIELD_U32(a1, 9420) = off_60BC6E38;
  FIELD_U32(a1, 9436) = 0;
  memset((void *)(a1 + 9188), 0, 132);
  FIELD_U32(a1, 9440) = 0;
  memset((void *)(a1 + 9576), 0, 92);
  FIELD_U32(a1, 9668) = 1065353216;
  FIELD_U8(a1, 9672) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9676));
  FIELD_U32(a1, 9676) = off_60BC6E38;
  FIELD_U32(a1, 9692) = 0;
  memset((void *)(a1 + 9444), 0, 132);
  FIELD_U32(a1, 9696) = 0;
  memset((void *)(a1 + 9832), 0, 92);
  FIELD_U32(a1, 9924) = 1065353216;
  FIELD_U8(a1, 9928) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9932));
  FIELD_U32(a1, 9932) = off_60BC6E38;
  FIELD_U32(a1, 9948) = 0;
  memset((void *)(a1 + 9700), 0, 132);
  FIELD_U32(a1, 9952) = 0;
  memset((void *)(a1 + 10088), 0, 92);
  FIELD_U32(a1, 10180) = 1065353216;
  FIELD_U8(a1, 10184) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 10188));
  FIELD_U32(a1, 10188) = off_60BC6E38;
  FIELD_U32(a1, 10204) = 0;
  memset((void *)(a1 + 9956), 0, 132);
  FIELD_U32(a1, 10208) = 0;
  memset((void *)(a1 + 10344), 0, 92);
  FIELD_U32(a1, 10436) = 1065353216;
  FIELD_U8(a1, 10440) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 10444));
  FIELD_U32(a1, 10444) = off_60BC6E38;
  FIELD_U32(a1, 10460) = 0;
  memset((void *)(a1 + 10212), 0, 132);
  memset((void *)(a1 + 6156), 0, 48);
  return a1;
}
