/* sub_6058F1F0
 * address: 0x6058F1F0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058F1F0(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int v5; // r9
  float *i; // r7
  float v7; // [sp+4h] [bp-2Ch] BYREF
  float v8; // [sp+8h] [bp-28h]

  v3 = FIELD_U32(a1, 20) & 7;
  if ( v3 <= 4 && ((1 << v3) & 0x15) != 0 )
  {
    v7 = FIELD_F32(a1, 108);
    v8 = FIELD_F32(a1, 112);
    return sub_6058F13C(a1, (int)&v7);
  }
  else
  {
    v5 = 0;
    for ( i = (float *)&dword_60CAF634; ; i += 2 )
    {
      if ( ((unsigned int)&dword_60CAF630 & ~(1616441992 << v1) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60CAF630) )
        {
          dword_60CAF634 = -1048576000;
          dword_60CAF638 = -1048576000;
          dword_60CAF63C = 0;
          dword_60CAF640 = -1048576000;
          dword_60CAF644 = 1098907648;
          dword_60CAF648 = -1048576000;
          dword_60CAF64C = -1048576000;
          dword_60CAF650 = 0;
          dword_60CAF654 = 0;
          dword_60CAF658 = 0;
          unk_60CAF65C = 1098907648;
          unk_60CAF660 = 0;
          unk_60CAF664 = -1048576000;
          dword_60CAF668 = 1098907648;
          dword_60CAF66C = 0;
          dword_60CAF670 = 1098907648;
          dword_60CAF674 = 1098907648;
          dword_60CAF678 = 1098907648;
          _cxa_guard_release(&dword_60CAF630);
        }
      }
      v7 = FIELD_F32(a1, 108) + *i;
      v8 = FIELD_F32(a1, 112) + i[1];
      if ( sub_6058F13C(a1, (int)&v7) == 1 )
        break;
      if ( ++v5 > 8 )
        return 0;
    }
    return 1;
  }
}
