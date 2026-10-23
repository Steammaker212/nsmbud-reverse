/* env_mist_ref_2_helper
 * address: 0x60449810   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall env_mist_ref_2_helper(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int16 v11; // [sp+10h] [bp-88h] BYREF
  int v12; // [sp+14h] [bp-84h]
  char v13; // [sp+39h] [bp-5Fh]
  char v14; // [sp+3Bh] [bp-5Dh]
  __int16 v15; // [sp+68h] [bp-30h]

  sub_60450C78(dword_60C9CEF0, a5, a6, 3);
  sub_60450CBC(dword_60C9CEF0, 7, 7, 7, 1, 2, 3);
  FIELD_U32(a1, 56) = a2;
  FIELD_U32(a1, 60) = a3;
  FIELD_U32(a1, 64) = a4;
  (**(void (__fastcall ***)(int, int))a1)(a1, 150);
  FIELD_U32(a1, 52) = 150;
  sub_6090B350(&v11);
  v12 |= 1u;
  v13 = 5;
  v14 = 6;
  v11 = 1;
  v15 = 260;
  sub_60450C98(dword_60C9CEF0, &v11, 3);
  return 1;
}
