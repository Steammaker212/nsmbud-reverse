/* SE_PLY_QUAT_ref
 * address: 0x607746B4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_QUAT_ref(int a1)
{
  int result; // r0
  int v3; // r0

  result = FIELD_U32(a1, 9936);
  switch ( result )
  {
    case 2:
      return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 125);
    case 1:
      return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 20);
    case 0:
      v3 = FIELD_U32(a1, 648);
      if ( (FIELD_U8(a1, 6902) & 4) != 0 )
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(v3 + 4) + 84))(
          FIELD_U32(v3, 4),
          21,
          0.1,
          3.0,
          0.0);
      else
        PlayerBase_dispatchVirtual3(v3, 21);
      return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_QUAT", 1, 0);
  }
  return result;
}
