/* sub_608BCC5C
 * address: 0x608BCC5C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BCC5C(int a1, _WORD *a2, _WORD *a3, int a4, int a5)
{
  int v7; // r7
  int v9; // r8
  __int16 *v10; // r0
  __int16 v11; // r1
  _BYTE v13[225]; // [sp+3Fh] [bp-E1h] BYREF

  v7 = a5;
  v9 = 0;
  (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(
    FIELD_U32(a1, 4),
    FIELD_U32(a1, 8) + 4 * a5 * a4 + 8,
    0);
  if ( (unsigned int)(4 * a5) <= 0x40 )
  {
    v9 = 0;
    if ( (*(int (__fastcall **)(_DWORD, unsigned int, int, _DWORD))(**(_DWORD **)(a1 + 4) + 16))(
           FIELD_U32(a1, 4),
           (unsigned int)v13 & 0xFFFFFFC0,
           4 * a5,
           0) == 4 * a5 )
    {
      v9 = 1;
      if ( a5 >= 1 )
      {
        v10 = (__int16 *)(((unsigned int)v13 & 0xFFFFFFC0) + 2);
        do
        {
          --v7;
          *a2++ = *(v10 - 1);
          v11 = *v10;
          v10 += 2;
          *a3++ = v11;
        }
        while ( v7 );
      }
    }
  }
  return v9;
}
