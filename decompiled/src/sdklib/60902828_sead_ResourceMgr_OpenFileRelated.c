/* sead_ResourceMgr_OpenFileRelated
 * address: 0x60902828   size: 384   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead_ResourceMgr_OpenFileRelated(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r11
  int *v6; // r6
  int v7; // r9
  int *v8; // r7
  int v9; // r1
  int i; // r2
  int v12; // [sp+0h] [bp-58h]
  int v13; // [sp+4h] [bp-54h]
  int (**v14)(); // [sp+8h] [bp-50h] BYREF
  int *v15; // [sp+Ch] [bp-4Ch]
  int v16; // [sp+10h] [bp-48h]
  int v17; // [sp+14h] [bp-44h] BYREF

  v4 = a2[9];
  if ( !v4 )
  {
    v15 = &v17;
    v14 = &BufferedSafeStringBase_char_vtable_probably;
    v16 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
    *(_BYTE *)v15 = 0;
    v14 = &off_60BD4C20;
    if ( sub_608E93BC((int)&v14, a2) )
    {
      v12 = a1;
      v5 = FIELD_U32(a1, 20);
      v13 = a1 + 16;
      if ( v5 == a1 + 16 )
      {
LABEL_14:
        v6 = (int *)(v12 + 44);
      }
      else
      {
        while ( 1 )
        {
          v6 = (int *)(v5 + 8);
          v7 = FIELD_U32(v5, 8);
          (*(void (__fastcall **)(int))(FIELD_U32(v7, 32) + 12))(v7 + 32);
          (*(void (__fastcall **)(int))(FIELD_U32(v7, 32) + 12))(v7 + 32);
          v8 = *(int **)(v7 + 36);
          ((void (__fastcall *)(int (***)()))v14[3])(&v14);
          if ( v8 == v15 )
            break;
          v9 = FIELD_U32(v7, 36);
          for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *((unsigned __int8 *)v15 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v9 + i - 1) )
              goto LABEL_16;
            if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *((unsigned __int8 *)v15 + i) )
              break;
            if ( !*(_BYTE *)(v9 + i) )
              goto LABEL_16;
          }
          v5 = FIELD_U32(v5, 4);
          if ( v5 == v13 )
            goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = (int *)(a1 + 44);
    }
LABEL_16:
    v4 = *v6;
  }
  return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 16))(v4, a2);
}
