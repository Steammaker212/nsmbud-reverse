/* sub_6060EC0C
 * address: 0x6060EC0C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060EC0C(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v4; // r5
  void *Resource; // r10
  void *Model2; // r8
  int v7; // r6
  ModelWrapper *v8; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)dword_60C84E84 & ~(1616964652 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
  {
    dword_60C84E80 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60C84E84);
  }
  v4 = 2;
  if ( v3 && (**v3)(v3, &dword_60C84E80) == 1 )
  {
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60CB3010);
    v4 = 1;
    Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60CB3018, 1, 0, 0, 0, 0, 0, 0);
    v7 = operator_new_8DE25C(0x30u, 0, 4);
    v8 = ModelWrapper_ctor((ModelWrapper *)v7, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v8, Resource, 0, 0);
    FIELD_U32(a1, 644) = v7;
    SkeletalAnim_play(**(_DWORD **)(v7 + 12), (int)Resource, (const char **)&dword_60CB3020);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    StateMgr__changeState((StateMgr *)(a1 + 668), &stru_60CB2FC0);
    sub_6060EDB0(a1);
  }
  return v4;
}
