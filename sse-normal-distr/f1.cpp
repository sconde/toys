// automatically generated by: scripts/approx.py f1 f1.cpp
__m128 f1(__m128 x) {
    const __m128 coef1 = _mm_set1_ps(8.234978f);
    const __m128 coef2 = _mm_set1_ps(-21.884957f);
    const __m128 coef3 = _mm_set1_ps(19.965363f);
    const __m128 coef4 = _mm_set1_ps(-9.059400f);
    const __m128 coef5 = _mm_set1_ps(2.952135f);
    const __m128 x2 = _mm_mul_ps(x, x);
    const __m128 x3 = _mm_mul_ps(x, x2);
    const __m128 x4 = _mm_mul_ps(x, x3);
    const __m128 x5 = _mm_mul_ps(x, x4);
    const __m128 t0 = _mm_mul_ps(x, coef1);
    const __m128 t1 = _mm_mul_ps(x2, coef2);
    const __m128 t2 = _mm_mul_ps(x3, coef3);
    const __m128 t3 = _mm_mul_ps(x4, coef4);
    const __m128 t4 = _mm_mul_ps(x5, coef5);
    __m128 result = t0;
    result = _mm_add_ps(result, t1);
    result = _mm_add_ps(result, t2);
    result = _mm_add_ps(result, t3);
    result = _mm_add_ps(result, t4);
    return result;
}
