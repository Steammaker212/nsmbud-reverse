/* sub_608FB368
 * address: 0x608FB368   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FB368(int result, _DWORD *a2)
{
  int v3; // r4
  bool v4; // zf
  int v5; // r6

  v3 = result;
  if ( a2 )
  {
    result = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)result + 68))(result, a2);
    v4 = result == 1;
    if ( result == 1 )
    {
      result = FIELD_U16(v3, 120);
      v4 = (result & 2) == 0;
    }
    if ( v4 )
    {
      v5 = 0;
      if ( (result & 1) != 0 )
      {
        v5 = v3 + 84;
        sead__CriticalSection__lock(v3 + 84);
      }
      *a2 = FIELD_U32(v3, 140);
      FIELD_U32(v3, 140) = a2;
      result = FIELD_U32(v3, 136) + FIELD_U32(v3, 124);
      FIELD_U32(v3, 136) = result;
      if ( v5 )
        return sead__CriticalSection__unlock(v5);
    }
  }
  return result;
}
