/* sub_6039EDB8
 * address: 0x6039EDB8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039EDB8(int a1)
{
  int v1; // r4

  v1 = FIELD_U32(a1, 36);
  sub_6039CC20();
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v1 + 192))(v1, &dword_60C97480);
}
