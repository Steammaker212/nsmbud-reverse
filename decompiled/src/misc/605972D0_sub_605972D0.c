/* sub_605972D0
 * address: 0x605972D0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605972D0(int result)
{
  char v1; // r12
  int v2; // r11
  int v3; // r4
  int v4; // r10
  int v5; // r8
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r0
  ActiveCollider *v8; // r6
  ActiveColliderMgr *v9; // r5

  v2 = result;
  v3 = FIELD_U32(result, 36);
  v4 = result + 32;
  if ( v3 != result + 32 )
  {
    v5 = FIELD_U32(result, 44);
    v6 = (int (__fastcall ***)(_DWORD, int *))(v3 - v5);
    do
    {
      if ( ((unsigned int)&dword_60CAF8EC & ~(1616474956 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF8EC) )
      {
        dword_60CAF8E8 = (int)&off_60C075D4;
        _cxa_guard_release(&dword_60CAF8EC);
      }
      v7 = (**v6)(v6, &dword_60CAF8E8);
      if ( v6 )
      {
        if ( v7 == 1 )
        {
          v8 = (ActiveCollider *)(v6 + 47);
          v9 = ActiveColliderMgr_instance;
          if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v8)
            && !ActiveColliderMgr_isInCreateList(v9, v8) )
          {
            ActiveColliderMgr_addToCreateList(v9, v8);
          }
        }
      }
      v3 = FIELD_U32(v3, 4);
      v6 = (int (__fastcall ***)(_DWORD, int *))(v3 - v5);
      result = v4 - FIELD_U32(v2, 44);
    }
    while ( v3 - v5 != result );
  }
  return result;
}
