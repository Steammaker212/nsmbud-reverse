/* sub_601B488C
 * address: 0x601B488C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B488C(int a1, int a2)
{
  char v2; // r12
  int i; // r5
  int result; // r0
  _DWORD v7[12]; // [sp+28h] [bp-30h] BYREF

  memset(v7, 255, 12);
  for ( i = a1; ; sub_601BC5FC(i, FIELD_U32(a1, 1228), v7, v7, a2, 0, 0, 0, 0, 0) )
  {
    i = FIELD_U32(i, 272);
    if ( ((unsigned int)&dword_60C8AB28 & ~(1612400948 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
    {
      dword_60C8AB24 = (int)&off_60BD4BBC;
      _cxa_guard_release(&dword_60C8AB28);
    }
    if ( !i || (**(int (__fastcall ***)(int, int *))i)(i, &dword_60C8AB24) != 1 )
      break;
  }
  result = FIELD_U32(a1, 1228) + 1;
  FIELD_U32(a1, 1228) = result;
  return result;
}
