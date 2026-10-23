/* sub_60222950
 * address: 0x60222950   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60222950(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8
  int result; // r0
  int i; // r7
  int v5; // r0
  char *v6; // r4
  char *v7; // r6
  signed int v8; // r5
  bool v9; // cc
  int v10; // r1
  char *v11; // r2
  char *v12; // r2
  char *v13; // r2
  char *v14; // r2
  unsigned int v15; // r2
  char *v16; // r1
  unsigned int v17; // r0
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  char *v21; // r6
  char *v22; // r4
  signed int v23; // r5
  signed int v24; // r0
  int v25; // [sp+0h] [bp-A8h]
  int (**v27)(); // [sp+30h] [bp-78h] BYREF
  char *v28; // [sp+34h] [bp-74h]
  int (**v29)(); // [sp+38h] [bp-70h] BYREF
  char *v30; // [sp+3Ch] [bp-6Ch]
  int v31; // [sp+40h] [bp-68h]
  int v32; // [sp+44h] [bp-64h] BYREF

  v2 = *a2;
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 120))(*a2);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 128))(v2, i);
      if ( v5 )
      {
        v27 = &sead__SafeStringBase__vtable;
        v28 = (char *)v5;
        v30 = (char *)&v32;
        v29 = &BufferedSafeStringBase_char_vtable_probably;
        v31 = 64;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
        v29 = &off_60BD4C08;
        v6 = v30;
        ((void (__fastcall *)(int (***)()))v27[3])(&v27);
        v7 = v28;
        if ( v6 != v28 )
        {
          ((void (__fastcall *)(int (***)()))v27[3])(&v27);
          v8 = 0;
          while ( v28[v8] )
          {
            if ( !v28[v8 + 1] )
            {
              ++v8;
              break;
            }
            if ( !v28[v8 + 2] )
            {
              v8 += 2;
              break;
            }
            v9 = v8 + 2 <= 0x7FFFF;
            v8 += 3;
            if ( !v9 )
            {
              v8 = 0;
              break;
            }
          }
          if ( v8 >= v31 )
            v8 = v31 - 1;
          qmemcpy(v6, v7, v8);
          v6[v8] = 0;
        }
        v29 = &off_60BD4BF0;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
        v10 = 0;
        while ( v30[v10] )
        {
          if ( !v30[v10 + 1] )
          {
            ++v10;
            break;
          }
          if ( !v30[v10 + 2] )
          {
            v10 += 2;
            break;
          }
          v9 = v10 + 2 <= 0x7FFFF;
          v10 += 3;
          if ( !v9 )
            goto LABEL_59;
        }
        if ( (v10 | 1) == 0xD )
        {
          v11 = v30;
          if ( v31 <= 0 )
            v11 = &byte_60B3BA34;
          if ( *v11 == 109 )
          {
            v12 = &byte_60B3BA34;
            if ( v31 > 1 )
              v12 = v30 + 1;
            if ( *v12 == 116 )
            {
              v13 = &byte_60B3BA34;
              if ( v31 > 2 )
                v13 = v30 + 2;
              if ( *v13 == 82 )
              {
                v14 = &byte_60B3BA34;
                if ( v31 > 3 )
                  v14 = v30 + 3;
                v15 = (unsigned __int8)*v14 - 70;
                if ( v15 <= 0x11 && ((1 << v15) & 0x20021) != 0 )
                {
                  v16 = &byte_60B3BA34;
                  if ( v31 > 7 )
                    v16 = v30 + 7;
                  v17 = (unsigned __int8)*v16 - 70;
                  if ( v17 <= 0x11 && ((1 << v17) & 0x20021) != 0 )
                  {
                    v18 = (_DWORD *)operator_new(0x1Cu);
                    *v18 = &BufferedSafeStringBase_char_vtable_probably;
                    v18[1] = v18 + 3;
                    v18[2] = 14;
                    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v18);
                    *(_BYTE *)v18[1] = 0;
                    *v18 = &off_60BD9308;
                    v19 = a1[74];
                    if ( v19 < a1[75] )
                    {
                      *(_DWORD *)(a1[76] + 4 * v19) = v18;
                      v19 = a1[74] + 1;
                      a1[74] = v19;
                    }
                    v20 = v19 ? *(_DWORD *)(a1[76] + 4 * v19 - 4) : 0;
                    v25 = v20;
                    v21 = *(char **)(v20 + 4);
                    ((void (__fastcall *)(int (***)()))v29[3])(&v29);
                    v22 = v30;
                    if ( v21 != v30 )
                    {
                      ((void (__fastcall *)(int (***)()))v29[3])(&v29);
                      v23 = 0;
                      while ( v30[v23] )
                      {
                        if ( !v30[v23 + 1] )
                        {
                          ++v23;
                          break;
                        }
                        if ( !v30[v23 + 2] )
                        {
                          v23 += 2;
                          break;
                        }
                        v9 = v23 + 2 <= 0x7FFFF;
                        v23 += 3;
                        if ( !v9 )
                        {
                          v23 = 0;
                          break;
                        }
                      }
                      v24 = FIELD_U32(v25, 8);
                      if ( v23 >= v24 )
                        v23 = v24 - 1;
                      qmemcpy(v21, v22, v23);
                      v21[v23] = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_59:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 120))(v2);
    }
  }
  return result;
}
