/* mochimakiBall_fail_ref
 * address: 0x6072D360   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mochimakiBall_fail_ref(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r1
  int v5; // r1
  const char *v6[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_BYTE *)(a1 + 6104);
  result = FIELD_U8(a1, 6104);
  if ( !result )
  {
    result = **(_DWORD **)(FIELD_U32(a1, 6100) + 12);
    if ( (FIELD_U8(result, 28) & 0x20) != 0 )
    {
      v4 = FIELD_U32(a1, 6124);
      v6[0] = (const char *)&sead__SafeStringBase__vtable;
      v6[1] = "mochimakiBall_fail";
      SkeletalAnim_play(result, v4, v6);
      v5 = **(_DWORD **)(FIELD_U32(a1, 6100) + 12);
      FIELD_F32(v5, 20) = (float)FIELD_U8(a1, 6120);
      FIELD_U32(v5, 28) |= 2u;
      result = (unsigned __int8)*v3 + 1;
      *v3 = result;
    }
  }
  return result;
}
