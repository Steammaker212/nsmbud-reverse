/* sub_60355164
 * address: 0x60355164   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60355164(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  signed int v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+4h] [bp-14h] BYREF

  v6 = dword_60AF1F20[FIELD_U32(a1, 80)];
  v5 = 119304647;
  if ( sub_6083246C((int *)(a1 + 160), &v6, &v5) == 1 && !FIELD_U32(a1, 6316) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95098);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95138);
  v2 = FIELD_U32(a1, 80);
  result = a1 + 648;
  if ( (*(_DWORD *)(a1 + 648 + 4 * ((v2 + 18) >> 5) + 2224) & (1 << ((v2 + 18) & 0x1F))) != 0
    || (*(_DWORD *)(result + 4 * ((v2 + 22) >> 5) + 2224) & (1 << ((v2 + 22) & 0x1F))) != 0 )
  {
    v4 = v2 + 28;
    result = *(_DWORD *)(result + 4 * (v4 >> 5) + 2224);
    if ( (result & (1 << (v4 & 0x1F))) == 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95058);
      result = 1;
      FIELD_U8(a1, 6460) = 1;
    }
  }
  return result;
}
