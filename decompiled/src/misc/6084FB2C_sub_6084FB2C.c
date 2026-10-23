/* sub_6084FB2C
 * address: 0x6084FB2C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084FB2C(int a1, char *a2, int a3)
{
  const char *v5; // r2
  char v6; // r0
  char v8[4]; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+8h] [bp-20h] BYREF
  unsigned int v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  *(_DWORD *)v8 = a3;
  v10[0] = 0;
  nn__util__PickOutCharacterFromUtf8String((nn__util *)v10, v8, (const char **)a3);
  v9 = 0;
  nn__util__ConvertCharacterUtf8ToUtf32((nn__util *)&v9, v10, v5);
  v6 = 1;
  if ( (v9 & 0xFFFFFFFE) != 0xE )
  {
LABEL_6:
    *a2 = v6;
    return *(_DWORD *)v8;
  }
  if ( a3 && (*(_BYTE *)a3 & 0xFE) == 0xE )
  {
    v6 = 0;
    if ( !FIELD_U16(a3, 4) )
      *(_DWORD *)v8 = a3 + 12;
    goto LABEL_6;
  }
  return *(_DWORD *)v8;
}
