/* sub_6074908C
 * address: 0x6074908C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074908C(int a1, float *a2)
{
  char v2; // r12
  int result; // r0
  float v6; // [sp+Ch] [bp-1Ch] BYREF
  float v7; // [sp+10h] [bp-18h]

  if ( ((unsigned int)algn_60CBE784 & ~(1618251952 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60CBE784) )
  {
    dword_60CBE780 = 1115684864;
    _cxa_guard_release((__guard *)algn_60CBE784);
  }
  sub_6023349C(dword_60C8D904, (int)&v6);
  result = 0;
  if ( (float)((float)((float)(v7 - a2[1]) * (float)(v7 - a2[1])) + (float)((float)(v6 - *a2) * (float)(v6 - *a2))) <= *(float *)&dword_60CBE780 )
  {
    FIELD_U32(a1, 684) = 4;
    FIELD_U32(a1, 688) = 0;
    SE_SYS_ref_2(SoundSystem_instance, a2, 3);
    return 1;
  }
  return result;
}
