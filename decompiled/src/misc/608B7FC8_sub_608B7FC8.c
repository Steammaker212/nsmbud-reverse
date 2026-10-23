/* sub_608B7FC8
 * address: 0x608B7FC8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7FC8(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v7[3]; // [sp+0h] [bp-20h] BYREF
  unsigned __int8 v8; // [sp+Ch] [bp-14h]

  result = FIELD_U32(a1, 236);
  if ( result )
  {
    v7[0] = a1 + 308;
    v7[1] = &word_60CC8D28;
    v7[2] = sub_608BBB30(a3, 0);
    v8 = FIELD_U8(a3, 108);
    (*(void (__fastcall **)(int, _DWORD *, _DWORD))(a1 + 236))(a2, v7, FIELD_U32(a1, 240));
    result = v8;
    FIELD_U8(a3, 108) = v8;
  }
  return result;
}
