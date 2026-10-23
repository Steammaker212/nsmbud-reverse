/* sub_6059719C
 * address: 0x6059719C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059719C(int result)
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
      if ( ((unsigned int)&dword_60C7B418 & ~(1616474648 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
      {
        dword_60C7B414 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B418);
      }
      v7 = (**v6)(v6, &dword_60C7B414);
      if ( v6 )
      {
        if ( v7 == 1 )
        {
          v8 = (ActiveCollider *)(v6 + 47);
          v9 = ActiveColliderMgr_instance;
          ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v8);
          ActiveColldierMgr_removeFromCreateList(v9, v8);
          ActiveColldierMgr_removeFromList3(v9, (int)v8);
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
