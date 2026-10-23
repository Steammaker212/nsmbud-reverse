/* sub_60186930
 * address: 0x60186930   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186930(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  return ((int (__fastcall *)(int, int, _DWORD, _DWORD, float, float, float, float, float, _DWORD, int *))loc_60185F9C)(
           a1,
           a2,
           0,
           FIELD_S16(a3, 8),
           FIELD_F32(a3, 4),
           FIELD_F32(a3, 12) * a4,
           FIELD_F32(a3, 16) * a4,
           a7,
           FIELD_F32(a3, 4),
           FIELD_S16(a3, 10),
           &dword_60B3B974);
}
