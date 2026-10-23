/* sub_604EC71C
 * address: 0x604EC71C   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604EC71C()
{
  int v0; // r10
  int i; // r7
  int v2; // r9
  bool v3; // cc
  int *v4; // r8
  int v5; // r12
  int v6; // r2
  int v7; // r4
  int v9; // [sp+18h] [bp-138h]
  int v10; // [sp+1Ch] [bp-134h]
  int (**v11)(); // [sp+20h] [bp-130h] BYREF
  int *v12; // [sp+24h] [bp-12Ch]
  int v13; // [sp+28h] [bp-128h]
  int v14; // [sp+2Ch] [bp-124h] BYREF

  v10 = StaffCreditTable_init(7);
  v9 = FIELD_U32(v10, 8);
  if ( v9 < 1 )
    return 0;
  v0 = 0;
  for ( i = 0; i != v9; ++i )
  {
    v12 = &v14;
    v11 = &BufferedSafeStringBase_char_vtable_probably;
    v13 = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v11);
    *(_BYTE *)v12 = 0;
    v11 = &off_60BD94BC;
    sub_60911A10(v10, &v11, i);
    (*(void (__fastcall **)(int *))(dword_60CA60D8 + 12))(&dword_60CA60D8);
    v2 = 0;
    while ( *(_BYTE *)(dword_60CA60DC + v2) )
    {
      if ( !*(_BYTE *)(dword_60CA60DC + v2 + 1) )
      {
        ++v2;
        break;
      }
      if ( !*(_BYTE *)(dword_60CA60DC + v2 + 2) )
      {
        v2 += 2;
        break;
      }
      v3 = v2 + 2 < 0x80000;
      v2 += 3;
      if ( !v3 )
      {
        v2 = 0;
        break;
      }
    }
    ((void (__fastcall *)(int (***)()))v11[3])(&v11);
    ((void (__fastcall *)(int (***)()))v11[3])(&v11);
    v4 = v12;
    (*(void (__fastcall **)(int *))(dword_60CA60D8 + 12))(&dword_60CA60D8);
    v5 = 1;
    if ( v4 != (int *)dword_60CA60DC )
    {
      v6 = v2;
      if ( v2 >= 0x80000 )
        v6 = 0x80000;
      if ( v2 >= 1 )
      {
        v7 = 0;
        while ( *((unsigned __int8 *)v12 + v7) == *(unsigned __int8 *)(dword_60CA60DC + v7) )
        {
          if ( *((_BYTE *)v12 + v7) )
          {
            if ( ++v7 < v6 )
              continue;
          }
          goto LABEL_21;
        }
        v5 = 0;
      }
    }
LABEL_21:
    v0 += v5;
  }
  return v0;
}
