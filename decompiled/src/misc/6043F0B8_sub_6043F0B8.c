/* sub_6043F0B8
 * address: 0x6043F0B8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043F0B8(int a1, int a2, int a3)
{
  int *v3; // r6
  int v5; // r4
  int v6; // r5
  int v7; // r1
  int v8; // r5
  int result; // r0
  const char *v10; // r0
  const char *v11[8]; // [sp+0h] [bp-20h] BYREF

  v3 = *(int **)(a3 + 40);
  if ( !v3 )
    return 0;
  v5 = *v3;
  v6 = a1 + 32;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 32) + 12))(a1 + 32);
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(a1 + 32);
  v7 = FIELD_U32(a1, 36);
  if ( v7 == v5 + 2 )
  {
LABEL_9:
    v10 = (const char *)(v3[2] + 2);
    v11[0] = (const char *)&sead__SafeStringBase__vtable;
    v11[1] = v10;
    return sub_6043EF70(a1, v11);
  }
  else
  {
    v8 = 0;
    result = 0;
    do
    {
      if ( *(unsigned __int8 *)(v7 + v8) != *(unsigned __int8 *)(v5 + 2 + v8) )
        break;
      if ( !*(_BYTE *)(v7 + v8) )
        goto LABEL_9;
      ++v8;
    }
    while ( v8 <= 0x80000 );
  }
  return result;
}
