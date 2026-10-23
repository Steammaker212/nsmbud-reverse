/* sub_6073773C
 * address: 0x6073773C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073773C(_DWORD *a1)
{
  a1[1824] = 50;
  a1[1900] = (4283036831u * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  a1[1901] = 0x2000000;
  a1[1902] = a1[27];
  a1[1903] = a1[28];
  a1[1904] = a1[29];
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CBDEA0);
}
