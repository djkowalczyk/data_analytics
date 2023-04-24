// Code generated by stanc v2.32.0
#include <stan/model/model_header.hpp>
namespace stan_5_2_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 23> locations_array__ =
  {" (found before start of program)",
  " (in '/content/stan_5_2.stan', line 8, column 2 to column 13)",
  " (in '/content/stan_5_2.stan', line 9, column 2 to column 13)",
  " (in '/content/stan_5_2.stan', line 13, column 2 to column 17)",
  " (in '/content/stan_5_2.stan', line 15, column 4 to column 50)",
  " (in '/content/stan_5_2.stan', line 14, column 17 to line 16, column 3)",
  " (in '/content/stan_5_2.stan', line 14, column 2 to line 16, column 3)",
  " (in '/content/stan_5_2.stan', line 28, column 4 to column 21)",
  " (in '/content/stan_5_2.stan', line 30, column 8 to column 45)",
  " (in '/content/stan_5_2.stan', line 29, column 18 to line 31, column 5)",
  " (in '/content/stan_5_2.stan', line 29, column 4 to line 31, column 5)",
  " (in '/content/stan_5_2.stan', line 20, column 2 to column 27)",
  " (in '/content/stan_5_2.stan', line 21, column 2 to column 27)",
  " (in '/content/stan_5_2.stan', line 23, column 6 to column 32)",
  " (in '/content/stan_5_2.stan', line 22, column 16 to line 24, column 3)",
  " (in '/content/stan_5_2.stan', line 22, column 2 to line 24, column 3)",
  " (in '/content/stan_5_2.stan', line 2, column 2 to column 17)",
  " (in '/content/stan_5_2.stan', line 3, column 17 to column 18)",
  " (in '/content/stan_5_2.stan', line 3, column 2 to column 20)",
  " (in '/content/stan_5_2.stan', line 4, column 9 to column 10)",
  " (in '/content/stan_5_2.stan', line 4, column 2 to column 22)",
  " (in '/content/stan_5_2.stan', line 13, column 14 to column 15)",
  " (in '/content/stan_5_2.stan', line 28, column 18 to column 19)"};
class stan_5_2_model final : public model_base_crtp<stan_5_2_model> {
 private:
  int n;
  std::vector<int> y;
  Eigen::Matrix<double,-1,1> log_miles_data__;
  Eigen::Map<Eigen::Matrix<double,-1,1>> log_miles{nullptr, 0};
 public:
  ~stan_5_2_model() {}
  stan_5_2_model(stan::io::var_context& context__, unsigned int
                 random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "stan_5_2_model_namespace::stan_5_2_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 16;
      context__.validate_dims("data initialization", "n", "int",
        std::vector<size_t>{});
      n = std::numeric_limits<int>::min();
      current_statement__ = 16;
      n = context__.vals_i("n")[(1 - 1)];
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "n", n, 0);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("y", "n", n);
      current_statement__ = 18;
      context__.validate_dims("data initialization", "y", "int",
        std::vector<size_t>{static_cast<size_t>(n)});
      y = std::vector<int>(n, std::numeric_limits<int>::min());
      current_statement__ = 18;
      y = context__.vals_i("y");
      current_statement__ = 18;
      stan::math::check_greater_or_equal(function__, "y", y, 0);
      current_statement__ = 19;
      stan::math::validate_non_negative_index("log_miles", "n", n);
      current_statement__ = 20;
      context__.validate_dims("data initialization", "log_miles", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      log_miles_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                           std::numeric_limits<double>::quiet_NaN());
      new (&log_miles)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(log_miles_data__.data(), n);
      {
        std::vector<local_scalar_t__> log_miles_flat__;
        current_statement__ = 20;
        log_miles_flat__ = context__.vals_r("log_miles");
        current_statement__ = 20;
        pos__ = 1;
        current_statement__ = 20;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 20;
          stan::model::assign(log_miles, log_miles_flat__[(pos__ - 1)],
            "assigning variable log_miles", stan::model::index_uni(sym1__));
          current_statement__ = 20;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 21;
      stan::math::validate_non_negative_index("lambda", "n", n);
      current_statement__ = 22;
      stan::math::validate_non_negative_index("y_sample", "n", n);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1;
  }
  inline std::string model_name() const final {
    return "stan_5_2_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.0",
             "stancflags = "};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "stan_5_2_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      local_scalar_t__ theta = DUMMY_VAR__;
      current_statement__ = 2;
      theta = in__.template read<local_scalar_t__>();
      std::vector<local_scalar_t__> lambda =
        std::vector<local_scalar_t__>(n, DUMMY_VAR__);
      current_statement__ = 6;
      for (int i = 1; i <= n; ++i) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          stan::math::exp((alpha + (theta *
            stan::model::rvalue(log_miles, "log_miles",
              stan::model::index_uni(i))))), "assigning variable lambda",
          stan::model::index_uni(i));
      }
      {
        current_statement__ = 11;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha, 1.2, 0.4));
        current_statement__ = 12;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(theta, 0.5, 0.1));
        current_statement__ = 15;
        for (int i = 1; i <= n; ++i) {
          current_statement__ = 13;
          lp_accum__.add(stan::math::poisson_lpmf<propto__>(
                           stan::model::rvalue(y, "y",
                             stan::model::index_uni(i)),
                           stan::model::rvalue(lambda, "lambda",
                             stan::model::index_uni(i))));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "stan_5_2_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      double theta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      theta = in__.template read<local_scalar_t__>();
      std::vector<double> lambda =
        std::vector<double>(n, std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha);
      out__.write(theta);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      current_statement__ = 6;
      for (int i = 1; i <= n; ++i) {
        current_statement__ = 4;
        stan::model::assign(lambda,
          stan::math::exp((alpha + (theta *
            stan::model::rvalue(log_miles, "log_miles",
              stan::model::index_uni(i))))), "assigning variable lambda",
          stan::model::index_uni(i));
      }
      if (emit_transformed_parameters__) {
        out__.write(lambda);
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      std::vector<double> y_sample =
        std::vector<double>(n, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 10;
      for (int i = 1; i <= n; ++i) {
        current_statement__ = 8;
        stan::model::assign(y_sample,
          stan::math::poisson_rng(
            stan::model::rvalue(lambda, "lambda", stan::model::index_uni(i)),
            base_rng__), "assigning variable y_sample",
          stan::model::index_uni(i));
      }
      out__.write(y_sample);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
      local_scalar_t__ theta = DUMMY_VAR__;
      theta = in__.read<local_scalar_t__>();
      out__.write(theta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      alpha = context__.vals_r("alpha")[(1 - 1)];
      out__.write(alpha);
      local_scalar_t__ theta = DUMMY_VAR__;
      theta = context__.vals_r("theta")[(1 - 1)];
      out__.write(theta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"alpha", "theta"};
    if (emit_transformed_parameters__) {
      std::vector<std::string> temp{"lambda"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"y_sample"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}};
    if (emit_transformed_parameters__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(n)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(n)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "lambda" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_sample" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "lambda" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_sample" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_sample\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lambda\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_sample\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (1 + 1);
    const size_t num_transformed = emit_transformed_parameters * (n);
    const size_t num_gen_quantities = emit_generated_quantities * (n);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (1 + 1);
    const size_t num_transformed = emit_transformed_parameters * (n);
    const size_t num_gen_quantities = emit_generated_quantities * (n);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = stan_5_2_model_namespace::stan_5_2_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return stan_5_2_model_namespace::profiles__;
}
#endif