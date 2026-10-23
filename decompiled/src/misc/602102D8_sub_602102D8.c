/* sub_602102D8
 * address: 0x602102D8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602102D8(int a1)
{
  int result; // r0

  ++FIELD_U32(a1, 456);
  sub_601CF9C0(dword_60C8AEF0);
  result = FIELD_U32(a1, 460);
  if ( result == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  if ( !result )
  {
    result = FIELD_U32(a1, 456);
    FIELD_F32(a1, 84) = FIELD_F32(a1, 436)
                        + (float)((float)(*(float *)((char *)sinLutTable
                                                   + (((unsigned int)(119304647 * result) >> 20) & 0xFF0 ^ 0x800))
                                        + (float)((float)(*(float *)((char *)&sinLutTable[1]
                                                                   + (((unsigned int)(119304647 * result) >> 20)
                                                                    & 0xFF0
                                                                    ^ 0x800))
                                                        * (float)((119304647 * result) & 0xFFFFFF))
                                                * 0.000000059605))
                                * 16.0);
    if ( result == 90 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  return result;
}
