/* sub_600EDF20
 * address: 0x600EDF20   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600EDF20(BossBase *a1)
{
  char *v1; // r1
  int v2; // r2

  v1 = &a1[1]._._._.collisionMgr[380];
  v2 = (unsigned __int8)a1[1]._._._.collisionMgr[380];
  switch ( v2 )
  {
    case 3:
      *v1 = 0;
      return (StateMethodExecuter *)(*(int (__fastcall **)(BossBase *, int *))(FIELD_U32(a1, 0x0)._._._._.vtable + 192))(
                                      a1,
                                      &dword_60C850CC);
    case 2:
      *v1 = 0;
      return (StateMethodExecuter *)(*(int (__fastcall **)(BossBase *, int *))(FIELD_U32(a1, 0x0)._._._._.vtable + 192))(
                                      a1,
                                      &dword_60C851F4);
    case 1:
      *v1 = 0;
      return (StateMethodExecuter *)(*(int (__fastcall **)(BossBase *, int *))(FIELD_U32(a1, 0x0)._._._._.vtable + 192))(
                                      a1,
                                      &dword_60C8503C);
    default:
      return BossBase__vfDC(a1);
  }
}
