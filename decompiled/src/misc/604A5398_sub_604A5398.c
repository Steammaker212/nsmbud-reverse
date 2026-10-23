/* sub_604A5398
 * address: 0x604A5398   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A5398(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r7
  int i; // r1
  int result; // r0
  int v6; // r7
  int j; // r2

  v1 = sub_6047482C(a1 + 48, 2u);
  v2 = v1;
  if ( !v1 )
    return 1;
  v3 = FIELD_U32(v1, 56);
  (*(void (__fastcall **)(int *))(dword_60CA12F0 + 12))(&dword_60CA12F0);
  (*(void (__fastcall **)(int *))(dword_60CA12F0 + 12))(&dword_60CA12F0);
  if ( dword_60CA12F4 == v3 )
    return FIELD_U8(v2, 51) & 1;
  for ( i = 1; *(unsigned __int8 *)(dword_60CA12F4 + i - 1) == *(unsigned __int8 *)(v3 + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA12F4 + i - 1) )
      return FIELD_U8(v2, 51) & 1;
    if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA12F4 + i) != *(unsigned __int8 *)(v3 + i) )
      break;
    if ( !*(_BYTE *)(dword_60CA12F4 + i) )
      return FIELD_U8(v2, 51) & 1;
  }
  v6 = FIELD_U32(v2, 56);
  (*(void (__fastcall **)(int *))(dword_60CA12F8 + 12))(&dword_60CA12F8);
  (*(void (__fastcall **)(int *))(dword_60CA12F8 + 12))(&dword_60CA12F8);
  if ( dword_60CA12FC == v6 )
    return FIELD_U8(v2, 51) & 1;
  result = 1;
  for ( j = 1; *(unsigned __int8 *)(dword_60CA12FC + j - 1) == *(unsigned __int8 *)(v6 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA12FC + j - 1) )
      return FIELD_U8(v2, 51) & 1;
    if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA12FC + j) != *(unsigned __int8 *)(v6 + j) )
      break;
    if ( !*(_BYTE *)(dword_60CA12FC + j) )
      return FIELD_U8(v2, 51) & 1;
  }
  return result;
}
