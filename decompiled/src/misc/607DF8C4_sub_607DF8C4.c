/* sub_607DF8C4
 * address: 0x607DF8C4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607DF8C4()
{
  int *result; // r0
  int v1; // r4
  int v2; // r6
  unsigned int v3; // r2
  unsigned int v4; // r0
  _BOOL4 v5; // r0
  unsigned int OperationMode; // r2
  int (**v7)(); // [sp+0h] [bp-18h] BYREF
  const char *v8; // [sp+4h] [bp-14h]

  result = &dword_60CBEA44;
  v1 = dword_60CBEA44;
  if ( dword_60CBEA44 )
  {
    result = &dword_60CC6E04;
    v2 = dword_60CC6E04;
    if ( dword_60CC6E04 )
    {
      v7 = &sead__SafeStringBase__vtable;
      v8 = "boot";
      sub_6074E918(dword_60CBEA44, &v7);
      v3 = *(_DWORD *)(FIELD_U32(v2, 40) + 44124);
      v7 = &sead__SafeStringBase__vtable;
      v8 = "AppBootCnt";
      sub_6074EC10(v1, (const char **)&v7, v3);
      v7 = &sead__SafeStringBase__vtable;
      v8 = "RomVersion";
      sub_6074EC10(v1, (const char **)&v7, 0x64u);
      v7 = &sead__SafeStringBase__vtable;
      v8 = "RlId";
      v4 = sub_608FD248();
      v5 = sub_6074EC10(v1, (const char **)&v7, v4);
      OperationMode = nn__oe__GetOperationMode((nn__oe *)v5);
      v7 = &sead__SafeStringBase__vtable;
      if ( OperationMode != 1 )
        OperationMode = 0;
      v8 = "TVConnected";
      sub_6074EC10(v1, (const char **)&v7, OperationMode);
      return (int *)sub_6074EC70(v1);
    }
  }
  return result;
}
