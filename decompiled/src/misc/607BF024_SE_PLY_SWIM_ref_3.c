/* SE_PLY_SWIM_ref_3
 * address: 0x607BF024   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_SWIM_ref_3(int a1)
{
  char *v2; // r0

  if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
    v2 = "";
  else
    v2 = (char *)&dword_60B0BE5C[5 * (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) + 4];
  FIELD_U32(a1, 124) = *(_DWORD *)v2;
  FIELD_U32(a1, 9940) = 0;
  FIELD_U32(a1, 12396) = 0;
  FIELD_U32(a1, 12400) = 4;
  FIELD_U32(a1, 12408) = 0;
  PlayerBase_dispatchVirtual3(a1 + 11356, 38, 0.0);
  FIELD_U32(a1, 156) = 0;
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_SWIM", 0, 0);
  FIELD_U32(a1, 12408) = 20;
  return 20;
}
