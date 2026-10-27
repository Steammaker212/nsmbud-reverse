/* sead__TaskBase__dtor_8EF4C8
 * address: 0x608EF4C8   size: 148   group: sdklib
 * sym: sead::TaskBase::~TaskBase() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead__TaskBase__dtor_8EF4C8(_DWORD *a1, int a2)
{
  int v3; // r0
  bool v4; // zf
  int v5; // r1
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r0

  *a1 =&sead__TaskBase__vtable;
  v3 = a1[23];
  v4 = v3 == 0;
  if ( v3 )
  {
    a2 = a1[5];
    v4 = a2 == 0;
  }
  if ( !v4 )
  {
    v5 = FIELD_U32(a2, 16);
    while ( 1 )
    {
      sead__TaskMgr__destroyTaskSync(v3, v5);
      v6 = a1[5];
      if ( !v6 )
        break;
      v5 = FIELD_U32(v6, 16);
      v3 = a1[23];
    }
  }
  a1[24] = 7;
  sead__TreeNode__detachAll(a1 + 4);
  v7 = a1[16];
  if ( v7 )
  {
    a1[16] = 0;
    sead__ListNode__erase(a1 + 13);
    --FIELD_U32(v7, 8);
  }
  v8 = sead__IDisposer__dtor(a1);
  operator_delete(v8);
}
