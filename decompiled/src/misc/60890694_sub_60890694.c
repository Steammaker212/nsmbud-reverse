/* sub_60890694
 * address: 0x60890694   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60890694(int a1, int a2, int a3, const void *a4)
{
  void *v8; // r0
  int v9; // r6
  int v10; // r4
  void *result; // r0
  _DWORD v12[14]; // [sp+8h] [bp-38h] BYREF

  qmemcpy((void *)(FIELD_U32(a1, 8) + 2416 * a2 + 1528), a4, 0x140u);
  v8 = (void *)sub_60895D14(FIELD_U32(a1, 8) + 2416 * a2 + 272, FIELD_U32(a1, 8) + 2416 * a2 + 1848, 320);
  if ( v8 )
  {
    qmemcpy(v8, a4, 0x140u);
    sub_60836348(a3, 5, 0, (_DWORD *)(FIELD_U32(a1, 8) + 2416 * a2 + 1848), 320);
    sub_60836348(a3, 5, 4, (_DWORD *)(FIELD_U32(a1, 8) + 2416 * a2 + 1848), 320);
    sub_60836348(a3, 5, 5, (_DWORD *)(FIELD_U32(a1, 8) + 2416 * a2 + 1848), 320);
    nullsub_98(FIELD_U32(a1, 8) + 2416 * a2 + 272);
  }
  v9 = a1 + 2480;
  v10 = -5;
  *(_BYTE *)(FIELD_U32(a1, 8) + 2416 * a2 + 2412) = 1;
  do
  {
    result = *(void **)v9;
    if ( *(_DWORD *)v9 )
    {
      memset(v12, 0, 16);
      result = (void *)sub_60895D14(FIELD_U32(a1, 8) + 2416 * a2 + 272, v12, FIELD_U32(v9, 20));
      if ( result )
      {
        qmemcpy(result, *(const void **)v9, FIELD_U32(v9, 20));
        sub_60836348(a3, v10 + 16, 0, v12, FIELD_U32(v9, 20));
        sub_60836348(a3, v10 + 16, 4, v12, FIELD_U32(v9, 20));
        sub_60836348(a3, v10 + 16, 5, v12, FIELD_U32(v9, 20));
        result = (void *)nullsub_98(FIELD_U32(a1, 8) + 2416 * a2 + 272);
      }
    }
    v9 += 4;
    ++v10;
  }
  while ( v10 );
  return result;
}
