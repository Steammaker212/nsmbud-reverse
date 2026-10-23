/* sub_608BCD0C
 * address: 0x608BCD0C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BCD0C(int a1, void *a2, int a3)
{
  void *v4; // r7
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  _BYTE v9[281]; // [sp+3Fh] [bp-119h] BYREF

  v4 = a2;
  v5 = 0;
  v6 = FIELD_U32(a1, 12);
  v7 = v6 == 0;
  if ( v6 )
  {
    a2 = (void *)FIELD_U16(a1, 16);
    v7 = a2 == 0;
  }
  if ( !v7 )
  {
    v5 = 0;
    (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(
      FIELD_U32(a1, 4),
      v6 + (_DWORD)a2 * a3,
      0);
    if ( (*(int (__fastcall **)(_DWORD, unsigned int, int, _DWORD))(**(_DWORD **)(a1 + 4) + 16))(
           FIELD_U32(a1, 4),
           (unsigned int)v9 & 0xFFFFFFC0,
           256,
           0) == 256 )
    {
      qmemcpy(v4, (const void *)((unsigned int)v9 & 0xFFFFFFC0), 0x100u);
      return 1;
    }
  }
  return v5;
}
