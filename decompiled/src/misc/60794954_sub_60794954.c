/* sub_60794954
 * address: 0x60794954   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60794954(int a1, int a2, float a3, float a4)
{
  float v8; // s0

  v8 = (*(float (__fastcall **)(_DWORD, int, float, float))(**(_DWORD **)(a1 + 4) + 76))(
         FIELD_U32(a1, 4),
         a2,
         a3,
         a4);
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 4) + 84))(
           FIELD_U32(a1, 4),
           a2,
           v8,
           a3,
           a4);
}
