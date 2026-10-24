/* KinopioBaloonText_bflyt_ref
 * address: 0x6074F4D4   size: 528   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KinopioBaloonText_bflyt_ref(StateMgr *a1)
{
  int v2; // r0
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int (__fastcall ***vtable)(void *, int *); // r5
  char v8; // r12
  int v10; // [sp+18h] [bp-28h] BYREF
  int v11; // [sp+1Ch] [bp-24h]
  int v12; // [sp+20h] [bp-20h] BYREF
  int v13; // [sp+24h] [bp-1Ch]

  sub_60002B50((int)&FIELD_U32(a1 + (44) * 16, 0x4));
  v2 = operator_new(0x10u);
  FIELD_U32(a1 + (40) * 16, 0x4) = (StateBase *)sub_60794D48(v2, 4, 1, 0, 1);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CBEAB8);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60CBEAC0, 1, 0, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  FIELD_U32(a1 + (40) * 16, 0x8) = (StateMethodExecuter *)v5;
  *((_DWORD *)FIELD_U32(v5, 0x0) + 9) = 23;
  vtable = (int (__fastcall ***)(void *, int *))a1[40].FIELD_U32(currentMethodExecuter, 0x0);
  if ( ((unsigned int)&dword_60C80400 & ~(1618277824 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( vtable && (**vtable)(vtable, &dword_60C803FC) == 1 )
    vtable[78] = (int (__fastcall **)(void *, int *))6;
  v12 = (int)&sead__SafeStringBase__vtable;
  v10 = (int)&sead__SafeStringBase__vtable;
  v13 = (int)"Game";
  v11 = (int)"KinopioBaloonText.bflyt";
  sub_60479588((int)&FIELD_U32(a1 + (45) * 16, 0x8), (int)&v12, &v10, 0);
  v12 = 250;
  v13 = 104;
  v10 = 1132068864;
  v11 = 1120927744;
  sub_60479808((int)&FIELD_U32(a1 + (45) * 16, 0x8), 0, &v12, &v10, FIELD_U32(a1 + (45) * 16, 0x4));
  FIELD_U32(a1 + (10) * 16, 0x0) = (StateExecuter *)-dword_60CBEAB0;
  StateMgr__changeState(a1 + 42, (StateBase *)&dword_60CBEA60);
  sub_6074F718(a1);
  return 1;
}
