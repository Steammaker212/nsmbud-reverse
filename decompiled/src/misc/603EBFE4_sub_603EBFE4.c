/* sub_603EBFE4
 * address: 0x603EBFE4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603EBFE4(int a1, Actor *a2)
{
  int ProfileId; // r4
  char v4; // r12
  int v5; // r1
  _BOOL4 result; // r0
  bool v7; // zf
  bool v8; // zf
  int v9; // r1

  ProfileId = Actor__getProfileId(a2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614725128 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( a2 )
  {
    v5 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(a2, 0x0))(a2, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)a2;
  }
  else
  {
    v5 = 0;
  }
  result = 1;
  if ( ProfileId != 808 )
  {
    v7 = ProfileId == 809;
    if ( ProfileId != 809 )
      v7 = ProfileId == 741;
    if ( !v7 )
    {
      v8 = ProfileId == 742;
      if ( ProfileId != 742 )
        v8 = ProfileId == 743;
      if ( !v8 )
      {
        if ( v5 )
        {
          v9 = FIELD_U8(v5, 533);
          if ( v9 != 1 )
            return v9 == 2;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
